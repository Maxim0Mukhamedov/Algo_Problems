#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string s;
    bool result = true;
    int n = 0;
    std::cin >> n;
    std::cin >> s;
    int l = s.size();
    for (int i = 0; i < l - 1; i += 1) {
        if (i + 1 != n && s[i] != 'a'&& s[i] != 'o'&& s[i] != 'u'&& s[i] != 'i' && s[i] != 'e') {
            if (s[i + 1] != 'a' && s[i + 1] != 'o' && s[i + 1] != 'u' && s[i + 1] != 'i' && s[i + 1] != 'e')
            {
                result = false;
            }
        }
    }
    if (result) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    system("pause");
}