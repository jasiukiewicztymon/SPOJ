#include <iostream>
#include <cstring>
#include <string>

std::string string_merge(std::string, std::string);

int main() {
    int t;
    std::string a, b, c;
    std::cin >> t;
    while (t--) {
        std::cin >> a >> b;
        std::cout << string_merge(a, b) << "\n";
    }
}

std::string string_merge(std::string a, std::string b) {
    int min = a.length() < b.length() ? a.length() : b.length();
    std::string output;

    for (int i = 0; i < min; i++) {
        output += a[i];
        output += b[i];
    }

    return output;
}
