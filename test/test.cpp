#include "../codeforces.hpp"
#include <iostream>

int main() {
    auto contests = Codeforces::get_future_contests();
    for (const auto& c : contests) {
        std::cout << c.name << '\n';
    }
    return 0;
}
