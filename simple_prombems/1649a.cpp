#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n;
        int cntBreak = 0;
        std::cin >> n;
        int dist = 0;
        std::vector<int> a;
        int lastLand = 1;
        for (int j = 0; j < n; j += 1) {
            int a_i;
            std::cin >> a_i;
            a.push_back(a_i);
            if (a_i == 0) {
                if (lastLand == 0) {
                    dist += 1;
                } else {
                    dist = 2;
                    cntBreak += 1;
                }
            }
            lastLand = a_i;
        }
        if (cntBreak <= 1) {
            std::cout << dist << '\n';
        } else {
            int k = 0;
            for (int j = n - 1; j > -1; j -= 1) {
                if (a[j]) {
                    k += 1;
                } else {
                    break;
                }
            }
            for (int j = 1; j < n; j += 1) {
                if (a[j]) {
                    k += 1;
                } else {
                    break;
                }
            }
            std::cout << n - k << '\n';
        }
    }   
} 
