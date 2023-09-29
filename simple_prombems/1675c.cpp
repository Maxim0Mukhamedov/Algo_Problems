#include <iostream>
#include <string>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        std::string s = "";
        std::cin >> s;
        int n = s.size();
        int last_one = 0;
        int first_zero = n - 1;
        for (int j = 0; j < n; j += 1) {
            if (s[j] == '1' && j > last_one) {
                last_one = j;
            }
            if (s[j] == '0' && j < first_zero) {
                first_zero = j;
            }
        }
        std::cout << first_zero - last_one + 1<< '\n';
    }
}
