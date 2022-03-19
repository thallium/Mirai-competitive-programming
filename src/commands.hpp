#pragma once
#include "codeforces.hpp"
#include "atcoder.hpp"
#include <MiraiCP.hpp>
#include <iomanip>
#include <type_traits>

namespace command {
void help(MiraiCP::GroupMessageEvent &e) {
    e.group.sendMessage(R"(查比赛: 查询所有平台最近的比赛
查比赛 cf | atc：查询对应平台最近的比赛)");
}

template<typename T>
std::enable_if_t<std::is_base_of_v<common::contest, T>, std::string> make_contest_message(const std::vector<T> &contests,
                                 const std::string &title) {
    std::string res = title;
    for (const auto &c : contests) {
        res += c.name + "\n";
        time_t time = (time_t)c.startTimeSeconds;
        std::stringstream ss;
        ss << std::put_time(std::localtime(&time), "%F %R");
        ss << " | " << c.durationSeconds / 3600 << ":" << std::setfill('0')
           << std::setw(2) << c.durationSeconds % 3600 / 60 << '\n';
        res += ss.str();
    }
    return res;
}

void send_cf_contests(MiraiCP::GroupMessageEvent &e) {
    auto contests = CF::get_future_contests();
    auto contest_message =
        make_contest_message(contests, "近期Codeforces比赛:\n");
    e.group.sendMessage(contest_message);
}

void send_atc_contests(MiraiCP::GroupMessageEvent &e) {
    auto contests = atc::get_future_contests();
    MiraiCP::Logger::logger.info("get contests done");
    auto contest_message =
        make_contest_message(contests, "近期AtCoder比赛:\n");
    e.group.sendMessage(contest_message);
}

void send_future_contests(MiraiCP::GroupMessageEvent &e) {
    auto cf_contests = CF::get_future_contests();
    std::string message = "近期各种比赛：\n";
    message += make_contest_message(cf_contests, "Codeforces:\n");
    MiraiCP::Logger::logger.info("make cf contests done");

    auto atc_contests = atc::get_future_contests();
    MiraiCP::Logger::logger.info("get contests done");
    message += make_contest_message(atc_contests, "AtCoder:\n");
    MiraiCP::Logger::logger.info("make atc contests done");
    e.group.sendMessage(message);
}
} // namespace command
