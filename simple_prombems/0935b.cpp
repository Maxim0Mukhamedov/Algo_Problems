#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#define _USE_MATH_DEFINES

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int x = 0, y = 0;
    int cost = 0;
    bool ok = false;
    int lastKing = 0;
    int newKing = 0;
    for (int i = 0; i < n; i += 1) {
        if (x == y && y != 0) {
            ok = true;
        } else {
            ok = false;
        }
        if (s[i] == 'U') {
            y += 1;
        } else {
            x += 1;
        }
        if (y > x) {
            newKing = 2;
        } else if (y < x) {
            newKing = 1;
        }
        if(ok && x != y && lastKing != newKing) {
            cost += 1;
        }
        lastKing = newKing;
    }
    std::cout << cost;     
} 
