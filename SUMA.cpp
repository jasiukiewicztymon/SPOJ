#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int main() {
    string input; int num, tot;

    getline(cin, input);
    tot = stoi(input);
    cout << tot << endl;

    while (true) {
        getline(cin, input);
        if (input.empty())
            break;
        num = stoi(input);
        tot += num;
        cout << tot << endl;
    }
}
