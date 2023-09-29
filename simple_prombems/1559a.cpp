#include <iostream>
#include <vector>
 
int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n;
        int m = -1;
        std::cin >> n;
        std::cin >> m;
        for (int j = 0; j < n - 1; j += 1) {
            int a_i;
            std::cin >> a_i;
            m &= a_i;
        }
        std::cout << m << '\n';
    }
}
