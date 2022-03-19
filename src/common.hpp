#pragma once
#include <string>

namespace common {
struct contest {
    std::string name;
    int startTimeSeconds, durationSeconds;
    contest(std::string name_, int startTime, int duration)
        : name(name_), startTimeSeconds(startTime), durationSeconds(duration) {}
};
} // namespace common
