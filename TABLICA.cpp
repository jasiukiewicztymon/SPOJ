#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int main() {
    string input, snum;
    vector<int> V;
    getline(cin, input);
    stringstream ss(input);
    while (getline(ss, snum, ' ')) {
        V.emplace_back(stoi(snum));
    }
    
    for (int i = V.size() - 1; i >= 0; i--) {
        cout << V[i] << " ";
    }
}
