#include <algorithm>
#include <iostream>
#include <iomanip>

int main() {
    double eps = 0.0001;
    double l = 0.1;
    double r = 1 + eps;
    double dt = 0.05;
    std::cout << std::setw(4) << 'x' << ' ' << std::setw(6) << 'y'<< '\n';
    for (double x = l; x <= r; x += dt) {
        double cur_pow_x = x;
        double y = 0;
        double ai = 1;
        for (int i = 1; std::abs(ai) >= eps; i += 1) {
            cur_pow_x *= (x * x);
            ai = ((i + 1) % 2 ? -1 : 1) * (cur_pow_x) / (4 * i*i - 1);
            y += ai;
            //std::cout << ai << ' ';
        }
        std::cout << std::setw(4) << x << ' ' << std::setprecision(4) << y << '\n';
    }
    return 0;
}