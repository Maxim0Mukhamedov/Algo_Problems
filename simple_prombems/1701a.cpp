#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int s = 0;
        int a = 0;
        for (int j = 0; j < 4; j += 1) {
            std::cin >> a;
            s += a;
        }
        if (s == 4) {
            std::cout << 2 << '\n';
        } else if (s == 0) {
            std::cout << 0 << '\n';
        } else {
            std::cout << 1 << '\n';
        }
    }
} 
