#include <iostream>

int main() {
    int n = 5;
    int s = 0;
    for (int i = 0; i < n; i += 1) {
        int x = 0;
        std::cin >> x;
        s += x;
    }
    if (s % n == 0 && s > 0) {
        std::cout << s/n;
    } else {
        std::cout << -1;
    }
}
