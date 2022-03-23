#include <iostream>
#include <cctype>
#include <string>

int main() {
    std::string input;

    while (std::getline(std::cin, input)) {
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == ' ') {
                input[i] = 0;
                input[i + 1] = toupper(input[i + 1]);
            }
        }
        for (int i = 0; i < input.size(); i++) {
            if (input[i] != 0)
                std::cout << input[i];
        }
        std::cout << "\n";
    }
}
