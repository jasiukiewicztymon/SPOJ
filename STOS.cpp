#include <iostream>
using namespace std;

int main() {
    int table[10];
    int s = 0, t = 0, i = 0;
    char c;
    while (cin >> c) {
        if (c == '+') {
            if (t < 10) {
                cin >> table[t];
                std::cout << ":)\n";
                t++;
            }
            else {
                cin >> s;
                std::cout << ":(\n";
            }
        }
        else {
            t--;
            if (t < 0) {
                std::cout << ":(\n";
                t = 0;
            }
            else if (t < 10)
                std::cout << table[t] << "\n";
            else {
                t = 9;
                std::cout << table[t] << "\n";
            }
        }
    }
    return 0;
}
