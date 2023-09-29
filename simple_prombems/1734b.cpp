#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n;
        std::cin >> n;
        for (int j = 1; j <= n; j += 1) {
            for (int k = 1; k <= j; k += 1) {
                if (k == 1 || k == j) {
                    std::cout << 1 << ' ';
                } else {
                    std::cout << 0 << ' ';
                }
            }
            std::cout << '\n';
        }
    }
    
}
