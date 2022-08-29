#include <iostream>

int main() {
    int t; std::cin >> t;

    for (int i = 0; i < t; i++) {
        // 24h => 86400sec
        const int dayInSec = 86400;
        int cookies = 0;
        int n, m; std::cin >> n >> m;
        for (int j = 0; j < n; j++) {
            int t; std::cin >> t;
            cookies += 86400 / t;
        }

        int numBox = cookies / m;
        if (cookies % m != 0) {
            numBox++;
        }

        std::cout << numBox << "\n";
    }

    return 0;
}
