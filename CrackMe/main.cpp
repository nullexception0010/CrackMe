#include <iostream>
#include <string>

int main() {
    std::string password;

    std::cout << "Enter Password: ";
    std::getline(std::cin, password);

    if (password == "SET2024") {
        std::cout << "Success!\n";
    }
    else {
        std::cout << "Passwords Don't Match!\n";
    }

    std::cout << "\nPress any key to close...";
    std::cin.get();

    return 0;
}