#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    long long times, ref, num, num2; cin >> times;
    string right, reversed;

    for (int i = 0; i < times; i++) {
        ref = 0; 
        cin >> num;
        while (true) {
            right = to_string(num);
            reversed = "";
            for (int i = 0; i < right.length(); i++)
                reversed.insert(0, right.substr(i, 1));
            if (right == reversed)
                break;

            num2 = stol(reversed);
            num += num2;

            ref++;
        }
        cout << right << " " << ref << endl;
    }
}
