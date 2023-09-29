#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        long long int n,k;
        std::cin >> n >> k;
        long long int sum = ((2 + 2 * (k - 1)) * k) / 2;
        if (((n - sum) % 2 == 0 && n - sum > 0) || sum == n) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }
    return 0;
}
