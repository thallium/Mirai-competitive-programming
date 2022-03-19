#pragma once
#include "common.hpp"
#include "httplib.h"
#include <regex>
#include <chrono>


namespace atc {

struct contest : public common::contest {
    using common::contest::contest;
};

static httplib::Client atc("https://atcoder.jp");

std::vector<contest> get_future_contests() {
    using namespace std::chrono_literals;

    auto res = atc.Get("/contests/");
    if (res->status != 200) return {};
    std::vector<contest> contests;
    std::smatch matches;
    // trunck out recent contests
    auto pos = res->body.find("Recent Contests");
    std::string s = res->body.substr(0, pos);
    pos = s.find("Upcoming Contests");
    s = s.substr(pos);

    static const std::regex reg(
        R"(http://www\.timeanddate\.com/worldclock/fixedtime\.html\?iso=(\d{4})(\d{2})(\d{2})T(\d{2})(\d{2})[\s\S]*?<a href="\S+?">(.+?)</a>[\w\W]*?<td class="text-center">(\d{2}):(\d{2})</td>)");
    while (std::regex_search(s, matches, reg)) {
        std::tm tm{};
        tm.tm_year = stoi(matches[1].str()) - 1900;
        tm.tm_mon = stoi(matches[2].str()) - 1;
        tm.tm_mday = stoi(matches[3].str());
        tm.tm_hour = stoi(matches[4].str());
        tm.tm_min = stoi(matches[5].str());
        int duration_hour = stoi(matches[7].str());
        int duration_min = stoi(matches[8].str());
        contests.emplace_back(matches[6].str(), mktime(&tm)-3600,
                              duration_hour * 3600 + duration_min * 60);
        s = matches.suffix().str();
    }
    return contests;
}
} // namespace atc
