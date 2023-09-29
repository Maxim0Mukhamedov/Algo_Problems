#include <iostream>
#include <string>
#include <vector>

int main()
{
    int t,n = 0;
    std::string s;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        std::cin >> s;
        std::vector<std::vector<int>> a(26);
        n = s.length();
        for (int j = 0; j < n; j += 1) {
            a[s[j] - 'a'].push_back(j + 1);
        }
        if (s[0] < s[n - 1]) {
            int cnt = 0;
            for (int j = s[0] - 'a'; j <= s[n - 1] - 'a'; j += 1) {
                if (!a[j].empty()) {
                    cnt += a[j].size();
                }
            }
            std::cout << abs(s[0] - s[n - 1]) << ' ' << cnt << '\n';
            for (int j = s[0] - 'a'; j <= s[n - 1] - 'a'; j += 1) {
                if (!a[j].empty()) {
                    for (int k: a[j]) std::cout << k << ' ';
                }
            }
        } else {
            int cnt = 0;
            for (int j = s[0] - 'a'; j >= s[n - 1] - 'a'; j -= 1) {
                if (!a[j].empty()) {
                    cnt += a[j].size();
                }
            }
            std::cout << abs(s[0] - s[n - 1]) << ' ' << cnt << '\n';
            for (int j = s[0] - 'a'; j >= s[n - 1] - 'a'; j -= 1) {
                if (!a[j].empty()) {
                    for (int k: a[j]) std::cout << k << ' ';
                }
            }
        }
        std::cout << '\n';
    }
}
