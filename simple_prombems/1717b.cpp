#include <iostream>
#include <array>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n,k,r,c;
        std::cin >> n >> k >> r >> c;
        for (int j = 1; j <= n; j += 1) {
            for (int l = 1; l <= n; l += 1) {
                if ((j + l) % k == (r + c) % k) {
                    std::cout << 'X';
                } else {
                    std::cout << '.';
                }
            }
            std::cout << '\n';
        }
    }
    return 0;
}
