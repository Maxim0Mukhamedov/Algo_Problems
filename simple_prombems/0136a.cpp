#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i += 1) {
        int a_i;
        std::cin >> a_i;
        a[a_i - 1] = i + 1;
    }
    for (auto i : a) {
        std::cout << i << ' ';
    }    
} 
