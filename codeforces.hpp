#include "httplib.h"
#include "json.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace nlohmann;
namespace CF {

struct contest {
    int id, startTimeSeconds, durationSeconds;
    std::string type;
    std::string phase;
    std::string name;
    contest(int id_, int startTime, int duration, std::string type_,
            std::string phase_, std::string name_)
        : id(id_), startTimeSeconds(startTime), durationSeconds(duration),
          type(type_), phase(phase_), name(name_) {}
};

static httplib::Client cf("http://codeforces.com");

std::vector<contest> get_future_contests() {
    auto res = cf.Get("/api/contest.list");
    if (res->status != 200)
        return {};
    auto body = json::parse(res->body);
    std::vector<contest> contests;
    if (body["status"] != "OK") return {};
    for (const auto &c : body["result"]) {
        if (c["phase"] != "BEFORE") break;
        contests.emplace_back(c["id"], c["startTimeSeconds"],
                              c["durationSeconds"], c["type"], c["phase"],
                              c["name"]);
    }
    std::reverse(begin(contests), end(contests));

    return contests;
}
} // namespace Codeforces
