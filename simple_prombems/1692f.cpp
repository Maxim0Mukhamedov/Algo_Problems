#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        std::vector<int> ost(10,0);
        for (int j = 0; j < n; j += 1) {
            int a_j;
            std::cin >> a_j;
            ost[(a_j % 10)] += 1;
        }
        bool ok = false;
        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 10; ++k) {
                for (int l = 0; l < 10; ++l) {
                    if (ost[j] * ost[k] * ost[l]) {
                        ost[j] -= 1;
                        ost[k] -= 1;
                        ost[l] -= 1;
                        if (ost[j] > -1 && ost[k] > -1 && ost[l] > -1) {
                            if ((j + k + l) % 10 == 3) {
                                ok = true;
                            }
                        }
                        ost[j] += 1;
                        ost[k] += 1;
                        ost[l] += 1;
                    }
                }
            }
        }
        if (ok) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }
}
