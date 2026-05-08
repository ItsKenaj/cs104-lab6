#include <iostream>
#include <string>

void printHelp() {
    std::cout << "Commands:\n";
    std::cout << "  help - show this message\n";
    std::cout << "  quit - exit the program\n";
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
        else std::cout << "Unknown command. Type 'help' for options.\n";
    }
    return 0;
}
