#include <iostream>
#include <array>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n,m,s_x,s_y,d;
        std::cin >> n >> m >> s_x >> s_y >> d;
        if (s_y + d >= m && s_y - d <= 1) {
            std::cout << -1 << '\n';
        } else if (s_x + d >= n && s_x - d <= 1) {
            std::cout << -1 << '\n';
        } else if (s_y - d <= 1 && s_x - d <= 1) {
            std::cout << -1 << '\n';
        } else if (s_y + d >= m && s_x + d >= n){
            std::cout << -1 << '\n';
        } else {
            std::cout << n + m - 2 << '\n';
        }
    }
    return 0;
}
