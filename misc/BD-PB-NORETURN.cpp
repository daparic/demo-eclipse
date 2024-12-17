
#include <cstdlib>

[[noreturn]] void example(int n) {
    if (n > 0) {
        throw "Received positive input";
    } else if (n < 0) {
        std::exit(0);
    }
} // VIOLATION

