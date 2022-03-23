#include <iostream>
#include <cctype>
#include <string>
#include <sstream>

int main() {
	int t, n;
	std::string str;
	std::cin >> t;
	while (t--) {
		std::cin >> str;
		n = int(str[0]) + int(str[1]) * 3 + int(str[2]) * 7 + int(str[3]) * 9 + int(str[4]) + int(str[5]) * 3 + int(str[6]) * 7 + int(str[7]) * 9 + int(str[8]) + int(str[9]) * 3 + int(str[10]);
		str = std::to_string(n);
		if (str[str.size() - 1] == '0')
			std::cout << "D\n";
		else
			std::cout << "N\n";
	}
}
