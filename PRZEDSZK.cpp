#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

int main() {
    int time; cin >> time;
    int a, b, ra, rb;
    for (int i = 0; i < time; i++) {
        cin >> a >> b; ra = a, rb = b;
        while (true) {
            if (ra == rb)
                break;
            else if (ra > rb)
                rb += b;
            else
                ra += a;
        }
        cout << ra << endl;
    }
}
