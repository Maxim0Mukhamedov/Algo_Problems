#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#define _USE_MATH_DEFINES

int main() {
    double x = 1;
    double s = 0;
    double f = 0;
    double a = 0, b = 1;
    double delta = 0.1;
    double epsilon = 0.0001;
    double y = 0;
    double p = 1;
    int i = 0;
    std::cout.flags(std::ios::left);
    std::cout.precision(8);
    std::cout << '|' << std::setw(10) << 'x' << '|' << std::setw(10) << "s(x)" << '|' << std::setw(10) << "f(x)" << '|'
              << '\n';
    for (i = 0, a; a <= b && (p == 0 || std::abs(p) > epsilon); a += delta, i += 1) {
        x = a;
        if (std::abs(x) < delta) {
            x = 0;
        }
        for (i = 0; std::abs(p) > epsilon && p != 0; i += 1) {
            p = std::pow(2*x, i) / std::tgamma(i + 1);
            s += p;
        }
        f = std::pow(M_E,2 * x);
        std::cout << '|' << std::setw(10) << x << '|' << std::setw(10) << s << '|' << std::setw(10) << f << '|' << '\n';
    }
}
