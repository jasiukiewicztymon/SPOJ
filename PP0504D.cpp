#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int t; std::cin >> t;
    while (t--) {
        float f; cin >> f;
        int i = *(reinterpret_cast<int*>(&f));
        std::stringstream ss;
        ss << std::hex << i;
        std::string out = ss.str();
        if (out != "0")
            for (int j = 0; j < out.size(); j++) {
                if (j % 2 == 0 && out[j] == '0') 
                    j++;

                std::cout << out[j];
                if (j % 2 != 0)
                    std::cout << " ";
            }
        else
            std::cout << "0 0 0 0 ";
        std::cout << "\n";
    }
}
