#pragma once
#define CPPHTTPLIB_OPENSSL_SUPPORT
#include "common.hpp"
#include "httplib.h"

namespace atc {

struct contest : public common::contest {
    using common::contest::contest;
};

static httplib::Client atc("https://atcoder.jp");

std::vector<contest> get_future_contests() {
    auto res = atc.Get("/contests/");
    std::cout << "hello\n";
    // if (res->status != 200) return {};
    std::cout << res->body;
    std::vector<contest> contests;

    return contests;
}
} // namespace atc
