#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main() {
    int time, ioutput; double num;
    string output;
    cin >> time;
    for (int i = 0; i < time; i++) {
        cin >> num;
        if (num <= 1)
            cout << "0 1\n";
        else {
            ioutput = num;
            for (int j = num - 1; j >= 2; j--) {
                ioutput *= j;
            }

            output = to_string(ioutput);
            if (output.size() == 1)
                cout << "0 " << output[output.size() - 1] << endl;
            else
                cout << output[output.size() - 2] << " " << output[output.size() - 1] << endl;
        }
    }
}
