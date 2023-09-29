    #include <iostream>
    #include <string>
     
    int main() {
        int t;
        std::cin >> t;
        for (int i = 0; i < t; i += 1) {
            bool ok = true;
            std::string s;
            std::cin >> s;
            int cnt = 1;
            char cur = s[0];
            for (int j = 1; j < s.size(); j += 1) {
                if (s[j] == cur) {
                    cnt += 1;
                } else {
                    if (cnt < 2) {
                        ok = false;
                    }
                    cnt = 1;
                }
                cur = s[j];
            }
            if (cnt < 2) {
                        ok = false;
                    }
            if (ok) {
                std::cout << "YES" << '\n';
            } else {
                  std::cout << "NO" << '\n';
            }
        }
    }
