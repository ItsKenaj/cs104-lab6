#include <iostream>
#include <cstdlib>
#include "randfuncs.h"

void flipCoin() {
    std::cout << (rand() % 2 == 0 ? "Heads" : "Tails") << std::endl;
}

void rollD6() {
    std::cout << (rand() % 6 + 1) << std::endl;
}

void rollD20() {
    std::cout << (rand() % 20 + 1) << std::endl;
}
