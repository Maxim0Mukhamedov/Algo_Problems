#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int a = 5, x = 1;
    while (a < n) {
        x *= 2;
        a += 5 * x;
    }

    n -= (a - 5*x);
    n = (n % x) ? n / x + 1 : n / x;
    switch (n) {
        case 1:
            std::cout << "Sheldon";
            break;
        case 2:
            std::cout << "Leonard";
            break;
        case 3:
            std::cout << "Penny";
            break;
        case 4:
            std::cout << "Rajesh";
            break;
        case 5:
            std::cout << "Howard";
            break;

    }
    return 0;
}
