#include <iostream>
#include <vector>
#include <cstring>
#include <string>

int main() {
    char op;
    int z[10];
    int a, b;
    while (std::cin >> op) {
        std::cin >> a >> b;
        switch (op) {
        case 'z': z[a] = b; break;
        case '+': std::cout << (z[a] + z[b]) << "\n"; break;
        case '-': std::cout << (z[a] - z[b]) << "\n"; break;
        case '*': std::cout << (z[a] * z[b]) << "\n"; break;
        case '/': std::cout << (z[a] / z[b]) << "\n"; break;
        case '%': std::cout << (z[a] % z[b]) << "\n"; break;
        }
    }
}
