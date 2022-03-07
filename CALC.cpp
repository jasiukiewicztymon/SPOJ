#include <iostream>
#include <vector>
#include <cstring>
#include <string>

int main() {
    char op;
    int a, b;
    while (std::cin >> op) {
        std::cin >> a >> b;
        switch (op) {
        case '+': std::cout << (a + b) << "\n"; break;
        case '-': std::cout << (a - b) << "\n"; break;
        case '*': std::cout << (a * b) << "\n"; break;
        case '/': std::cout << (a / b) << "\n"; break;
        case '%': std::cout << (a % b) << "\n"; break;
        }
    }
}
