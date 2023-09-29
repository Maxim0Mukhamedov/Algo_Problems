#include <iostream>
#include <string>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 0;
        int k = 0;
        std::cin >> n >> k;
        std::string s = "";
        std::cin >> s;
        int m = 0;
        for (int j = 0; j < k; j += 1) {
            if (s[j] == 'B') {
                m += 1;
            }
        }
        int cnt = m;
        for (int j = k; j < n; j += 1) {
            if (s[j] == 'B') {
                cnt += 1;
            }
            if (s[j -k] == 'B') {
                cnt -= 1;
            }
            if (cnt > m) {
                m = cnt;
            }
        }
        std::cout << k - m << '\n';
    }
}
