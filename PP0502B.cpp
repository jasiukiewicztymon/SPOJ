#include <iostream>
#include <vector>
using namespace std;
int main() {
    int time, size, temp; cin >> time;
    vector<int> Arr;
    
    for (int i = 0; i < time; i++) {
        cin >> size;
        for (int j = 0; j < size; j++) {
            cin >> temp;
            Arr.emplace_back(temp);
        }

        for (int j = Arr.size() - 1; j >= 0; j--) {
            cout << Arr[j] << " ";
        }
        cout << endl;
        Arr.clear();
    }
}
