#include <iostream>
#include <string>

int main() {
    const std::string password = "SET2024";
    std::string guess;

    std::cout << "Enter Password: ";
    std::getline(std::cin, guess);

    if (password == guess) {
        std::cout << "Success!\n";
    }
    else {
        std::cout << "Passwords Don't Match!\n";
    }

    std::cout << "\nPress any key to close...";
    std::cin.get();

    return 0;
}