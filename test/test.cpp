#include "../codeforces.hpp"
#include <iostream>
#include <ctime>
#include <chrono>
#include <iomanip>

int main() {
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
    return 0;
}
