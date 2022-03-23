#include <iostream>
#include <cctype>
#include <string>

int main() {
	int t; std::cin >> t;
	long long max = 0, g = 0, in;
	while (t--) {
		std::cin >> in;
		g += in;
		if (g < 0)
			g = 0;
		if (g > max)
			max = g;
	}
	std::cout << max;
}
