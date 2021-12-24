#include <iostream>
#include <vector>
using namespace std;
int main() {
    int num, arr; cin >> num;
    bool bV;
    for (int i = 0; i < num; i++) {
        bV = true;
        cin >> arr;
        int mid = arr / 2;
        if (arr == 0 || arr == 1) 
            bV = false;
        else {
            for (int j = mid; j >= 2; j--) {
                if (arr % j == 0) {
                    bV = false;
                    break;
                }
            }
        }
        if (bV)
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
}
