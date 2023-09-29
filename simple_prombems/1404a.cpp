#include <iostream>
#include <string>
#include <array>

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        int n,k;
        std::cin >> n >> k;
        std::string s,def = "";
        std::cin >> s;
        bool ok;
        for (int j = 0; j < k; ++j) {
            int q = j + k;
            char def_pos = s[j];
            def += s[j];
            ok = true;
            while (q < n) {
                if (def_pos == '?') {
                    if (s[q] != '?') {
                        def_pos = s[q];
                        def[j] = def_pos;
                    }
                } else {
                    if (s[q] != def_pos and s[q] != '?') {
                        ok = false;
                        break;
                    }
                }
                q += k;
            }
            if (not ok) {
                break;
            }
        }
        if (!ok) {
            std::cout << "NO" << '\n';
        } else {
            int cnt_0 = 0,cnt_1 = 0;
            for (int j = 0; j < k; ++j) {
                if (def[j] == '0') {
                    cnt_0 += 1;
                } else if (def[j] == '1') {
                    cnt_1 += 1;
                }
            }
            if (cnt_0 > k/2 or cnt_1 > k/2) {
                std::cout << "NO" << '\n';
            } else {
                std::cout << "YES" << '\n';
            }
        }
    }
    return 0;
}
