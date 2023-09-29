#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <winnt.h>

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 0;
        std::cin >> n;
        int cnt2 = 0;
        for (int j = 0; j < n; j += 1) {
            int ai = 0;
            std::cin >> ai;
            while (ai % 2 == 0) {
                cnt2 += 1;
                ai /= 2;
            }
        }
        if (cnt2 > n) {
            std::cout << 0 << '\n';
        } else if (cnt2 == n) {
            std::cout << 0 << '\n';
        } else {
            int ans = 0;
            int power = int(std::log2(n));
            while (cnt2 != n && power > 0) {
                if (cnt2 + power <= n) {
                    cnt2 += power;
                    ans += 1;
                }
                power -= 1;
            }
            if (cnt2 != n) {
                std::cout << -1 << '\n';
            } else {
                std::cout << ans << '\n';
            }
        }
    }
}