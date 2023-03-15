#include <iostream>
#include "cyclone.h"

int addnum(int a, int b) {
    return a + b;
}

bool decide(bool a, bool b, bool c) {
    if (a && b && c) {
        return true;
    }
    return false;
}

int main() {
    std::cout << "*** Parasoft C/C++test Demo ***\n";
    return 0;
}
