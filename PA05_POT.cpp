#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;
int main() {
    int time; cin >> time;
    int a, b, c;
    for (int i = 0; i < time; i++) {
        cin >> a >> b;
        a %= 10;
        if (b % 4 == 0)
            b = 4;
        else 
            b %= 4;
        c = a;
        for (int j = 1; j < b; j++) {
            c *= a;
        }
        cout << c % 10 << endl;
    }
}
