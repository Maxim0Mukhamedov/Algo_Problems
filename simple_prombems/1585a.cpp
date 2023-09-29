#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define _USE_MATH_DEFINES

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 0;
        std::cin >> n;
        int k  = 1;
        int last = -3;
        int a_i = -1;
        for (int j = 0; (j < n); j += 1) {
            std::cin >> a_i;
            if ((last != -3) && last && a_i && k != -1) {
                k += 5;
            } else if (a_i == 1 && k != -1) {
                k += 1;
            } else if ((last + a_i) == 0) {
                k = -1;
            }
            last = a_i;
        } 
        std::cout << k << '\n';
    }
} 
