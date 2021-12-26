#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    string input, output;
    int ref, index, time;
    cin >> time;
    for (int i = 0; i < time; i++) {
        ref = 1; index = 1;
        cin >> input;
        for (index; index < input.size(); index++) {
            if (input[index - 1] == input[index]) {
                ref++;
            }
            else {
                if (ref < 3) {
                    for (int j = 0; j < ref; j++) {
                        output += input[index - 1];
                    }
                }
                else {
                    output += input[index - 1] + to_string(ref);
                }
                ref = 1;
            }
        }

        if (ref < 3) {
            for (int j = 0; j < ref; j++) {
                output += input[index - 1];
            }
        }
        else {
            output += input[index - 1] + to_string(ref);
        }

        cout << output << endl;
        output = "";
    }
}
