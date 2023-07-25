#include <iostream>
#include "cyclone.h"

#include "include/Bank.h"
#include "include/BaseDisplay.h"
#include "include/ATM.h"

int addnum(int a, int b) {
    if (a == 42) {
        return a*b;
    }
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
    Bank bank;
    BaseDisplay display;
    ATM atm(&bank, &display);
    atm.viewAccount(12345, "password");
    return 0;
}
