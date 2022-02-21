#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n; cin >> t;
    while (t) {
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n; i++) {
            bool change = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (v[j] > v[j + 1]) {
                    int temp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = temp;
                    change = true;
                }
            }
            if (!change)
                break;
        }
        
        int f = 0;

        for (int i = n - 1; i > 0; i--) {
            if (v[i] != v[n - 1])
                break;
            cout << v[i] << " ";
            f++;
        }
        for (int i = 0; i < n - f; i++)
            cout << v[i] << " ";

        cout << "\n";

        t--;
    }
    return 0;
}
