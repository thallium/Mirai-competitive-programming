#include <MiraiCP.hpp>
#include "codeforces.hpp"

namespace command {
void help(MiraiCP::GroupMessageEvent &e) {
    e.group.sendMessage(R"(查比赛: 查询最近的比赛)");
}

std::string make_contest_message(const std::vector<CF::contest>& contests, const std::string& title) {
    std::string res = title;
    for (const auto& c : contests) {
        res += c.name + "\n";
    }
    return res;
}

void send_cf_contests(MiraiCP::GroupMessageEvent &e) {
    auto contests = CF::get_future_contests();
    auto contest_message = make_contest_message(contests, "近期Codeforces比赛:\n");
    e.group.sendMessage(contest_message);
}

void send_future_contests(MiraiCP::GroupMessageEvent &e) {
    
}
} // namespace command
