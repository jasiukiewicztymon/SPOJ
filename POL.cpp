#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string a, b;
        cin >> a;
        
        int l = a.length() / 2;
        b = a.substr(0, l);
        cout << b << "\n";
    }
    return 0;
}
