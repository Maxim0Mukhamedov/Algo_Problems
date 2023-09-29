#include <iostream>
#include <string>

int main()
{
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        std::string s;
        std::cin >> s;
        int l = s.length();
        bool ok = true;
        for (int j = l - 1; j > 0; j -= 1) {
            if (s[j] + s[j - 1] - '0' * 2 > 9) {
                int x = s[j] + s[j - 1] - '0' * 2;
                s[j] = '0' + x % 10;
                s[j - 1] = '1';
                ok = false;
                break;
            }
        }
        if (ok) {
            s[1] += s[0] - '0';
            s.erase(0,1);
        }
        std::cout << s << std::endl;
    }
    return 0;
}
