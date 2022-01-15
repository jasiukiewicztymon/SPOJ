#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int nwd(int a, int b) {
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int times, a, b; cin >> times;
    for (int i = 0; i < times; i++) {
        cin >> a >> b;
        cout << nwd(a, b) << endl;
    }
}
