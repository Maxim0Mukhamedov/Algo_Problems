#include <iostream>
#include <string>
#include <array>

int main()
{
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        int a,b;
        std::string s;
        std::cin >> a >> b >> s;
        int n = a + b;
        int cnt_question = 0;
        bool center_exist = false, center_taken = false;
        if (n % 2 == 1) {
            center_exist = true;
        }
        if (center_exist and s[n / 2] != '?') {
            center_taken = true;
            if (s[n / 2] == '0') {
                a -= 1;
            } else {
                b -= 1;
            }
        } else if (center_exist and s[n/2] == '?') {
            cnt_question += 1;
        }
        bool correct = true;
        for (int j = 0; j < n / 2; ++j) {
            if (s[j] != s[n - 1 - j] && s[n - 1 - j] != '?' && s[j] != '?') {
                correct = false;
                break;
            } else {
                if (s[j] == '0' || s[n - 1 - j] == '0') {
                    a -= 2;
                } else if (s[j] == '1' || s[n - 1 - j] == '1') {
                    b -= 2;
                }
                if (s[n - 1 - j] == '?' && s[j] == '?') {
                    cnt_question += 2;
                } else if (s[n - 1 - j] == '?' || s[j] == '?') {
                    cnt_question += 1;
                }
            }
        }
        if (n == 1) {
            if (s[0] == '?') {
                cnt_question += 1;
            }
        }
        if (not correct) {
            std::cout << -1 << '\n';
        } else {
            if (a % 2 == 1 and b % 2 == 1) {
                std::cout << -1 << '\n';
            } else if (center_taken and (a % 2 == 1 or b % 2 == 1)) {
                std::cout << -1 << '\n';
            } else if ((a % 2 == 0 and b % 2 == 0) and (center_exist and not center_taken)) {
                std::cout << -1 << '\n';
            } else if (a < 0 or b < 0) {
                std::cout << -1 << '\n';
            } else if (cnt_question < a + b) {
                std::cout << -1 << '\n';
            } else {
                for (int j = 0; j < n / 2; ++j) {
                    if (s[j] != '?') {
                        s[n - 1 - j] = s[j];
                    } else if (s[n - 1 - j] != '?') {
                        s[j] = s[n - 1 - j];

                    } else if (a > 1) {
                        s[j] = s[n - 1 - j] = '0';
                        a -= 2;
                    } else if (b > 1) {
                        s[j] = s[n - 1 - j] = '1';
                        b -= 2;
                    }
                }
                if (center_exist && s[n / 2] == '?') {
                    if (a == 1) {
                        s[n / 2] = '0';
                    } else {
                        s[n / 2] = '1';
                    }
                }
                std::cout << s << '\n';
            }
        }
    }
    return 0;
}
