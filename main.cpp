#include <iostream>
#include <string>
#include "randfuncs.h"

void printHelp() {
    std::cout << "Commands:\n";
    std::cout << "  help - show this message\n";
    std::cout << "  quit - exit the program\n";
    std::cout << "  coin - flip a coin!\n";
    std::cout << "  rollD6 - roll a die!\n";
    std::cout << "  rollD20 - roll a D20!\n";
}

int main() {
    std::string cmd;
    std::cout << "Swiss Army Calculator\n";
    printHelp();

    while (true) {
        std::cout << "> ";
        std::cin >> cmd;

        if (cmd == "quit") break;
        else if (cmd == "help") printHelp();
        else if (cmd == "coin") flipCoin();
        else if (cmd == "rollD6") rollD6();
        else if (cmd == "rollD20") rollD20();
        else std::cout << "Unknown command. Type 'help' for options.\n";
    }
    return 0;
}
