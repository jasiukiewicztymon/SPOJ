#include <iostream>
#include <cctype>
#include <string>
#include <sstream>

std::string toHex(int n) {
	std::stringstream ss;
	ss << std::hex << n;
	std::string color = ss.str();
	for (int i = 0; i < color.size(); i++)
		color[i] = toupper(color[i]);
	if (color.size() < 2)
		color = '0' + color;
	return color;
}

bool named(std::string color) {
	if (color == "#000000") {
		std::cout << "black\n"; return false;
	}
	else if (color == "#C0C0C0") {
		std::cout << "silver\n"; return false;
	}
	else if (color == "#808080") {
		std::cout << "gray\n"; return false;
	}
	else if (color == "#FFFFFF") {
		std::cout << "white\n"; return false;
	}
	else if (color == "#800000") {
		std::cout << "maroon\n"; return false;
	}
	else if (color == "#FF0000") {
		std::cout << "red\n"; return false;
	}
	else if (color == "#800080") {
		std::cout << "purple\n"; return false;
	}
	else if (color == "#FF00FF") {
		std::cout << "fuchsia\n"; return false;
	}
	else if (color == "#008000") {
		std::cout << "green\n"; return false;
	}
	else if (color == "#00FF00") {
		std::cout << "lime\n"; return false;
	}
	else if (color == "#808000") {
		std::cout << "olive\n"; return false;
	}
	else if (color == "#FFFF00") {
		std::cout << "yellow\n"; return false;
	}
	else if (color == "#000080") {
		std::cout << "navy\n"; return false;
	}
	else if (color == "#0000FF") {
		std::cout << "blue\n"; return false;
	}
	else if (color == "#008080") {
		std::cout << "teal\n"; return false;
	}
	else if (color == "#00FFFF") {
		std::cout << "aqua\n"; return false;
	}
	else
		return true;
}

int main() {
	int r, g, b, t;
	std::cin >> t;
	std::string color = "#";
	while (t--) {
		color = "#";
		std::cin >> r >> g >> b;
		color += (toHex(r) + toHex(g) + toHex(b));
		if (named(color))
			std::cout << color << std::endl;
	}
}
