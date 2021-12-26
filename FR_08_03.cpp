#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int time; cin >> time;
    string password, enter;
    bool bV;
    for (int i = 0; i < time; i++) {
        bV = false;
        cin >> password >> enter;

        for (int j = 0; j < password.size(); j++) {
            if (password.size() != enter.size()) {
                bV = true;
                break;
            }
            if (password[j] != enter[j] && enter[j] != '*') {
                bV = true;
                break;
            }
        }
        if (!bV)
            cout << "ok\n";
        else
            cout << "error\n";
    }
}
