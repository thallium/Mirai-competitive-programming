#include "codeforces.hpp"
#include "atcoder.hpp"
#include <iostream>
#include <ctime>
#include <chrono>
#include <iomanip>

template<typename T>
std::enable_if_t<std::is_base_of_v<common::contest, T>, std::string> make_contest_message(const std::vector<T> &contests,
                                 const std::string &title) {
    std::string res = title;
    for (const auto &c : contests) {
        res += c.name + "\n";
        time_t time = (time_t)c.startTimeSeconds;
        std::stringstream ss;
        ss << std::put_time(std::localtime(&time), "%F %T");
        ss << " | " << c.durationSeconds / 3600 << ":" << std::setfill('0')
           << std::setw(2) << c.durationSeconds % 3600 / 60 << '\n';
        res += ss.str();
    }
    return res;
}
void test_cf_time() {
    setenv("TZ", "/usr/share/zoneinfo/Asia/Shanghai", 1);

    auto contests = CF::get_future_contests();
    std::string res;
    for (const auto &c : contests) {
        res += c.name + "\n";
        time_t time = (time_t)c.startTimeSeconds;
        std::stringstream ss;
        ss << std::put_time(std::localtime(&time), "%F %T");
        ss << " | " << c.durationSeconds / 3600 << ":" << std::setfill('0')
           << std::setw(2) << c.durationSeconds % 3600 / 60 << '\n';
        res += ss.str();
    }
    std::cout << res;
}

void test_atc() {
    atc::get_future_contests();
    /* test_cf_time(); */
}

void test_atc_contest_message() {
    auto contests = atc::get_future_contests();
    auto contest_message = make_contest_message(contests, "近期AtCoder比赛:\n");
    std::cout << contest_message << '\n';
}

int main() {
    test_atc_contest_message();
    return 0;
}
