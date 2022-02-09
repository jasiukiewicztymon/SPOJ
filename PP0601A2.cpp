#include <iostream>
using namespace std;

int main() {
    int i = 0, a = 0, b;
    std::cin >> a;
    std::cout << a << "\n";
    while (1) {
        std::cin >> b;
        if (i == 3)
            break;
        if (a != 42 && b == 42)
            i++;
        std::cout << b << "\n";
        a = b;
    }
    return 0;
}
