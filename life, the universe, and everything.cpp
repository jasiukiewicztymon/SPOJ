#include <iostream>
#include <vector>
using namespace std;
int main() {
	int temp; cin >> temp;
	vector<int> Arr;
	while (temp != 42) {
		Arr.emplace_back(temp);
		cin >> temp;
	} 

	for (int i = 0; i < Arr.size(); i++) 
		cout << Arr[i] << endl;
}
