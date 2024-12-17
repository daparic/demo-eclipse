#include <functional>
std::function<int()> glob;

void g1(int p) {
    glob = [&](){               // Violation
        return p;
    };
}
