#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

int main() {
    int time, size, total, num; cin >> time;
    for (int i = 0; i < time; i++) {
        cin >> size;
        total = 0;
        for (int j = 0; j < size; j++) {
            cin >> num;
            total += num;
        }
        cout << total << endl;
    }
}
