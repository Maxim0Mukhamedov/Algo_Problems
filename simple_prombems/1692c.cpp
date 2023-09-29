#include <iostream>
#include <string>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        std::string s;
        std::vector<int> a(8,0);
        std::vector<int> ind(8,0);
        int cntStar = 0;
        int ans = 0;
        for (int j = 0; j < 8; ++j) {
            std::cin >> s;
            for (int k = 0; k < 8; ++k) {
                if (s[k] == '#') {
                    ind[k] = j;
                    a[k] += 1;
                }
            }
        }
        for (int j = 1; j < 7; ++j) {
            if (a[j] == 1 && a[j - 1] == 2 && a[j + 1] == 2) {
                std::cout << ind[j] + 1 << ' ' << j + 1 << '\n';
            }
        }
    }
}
