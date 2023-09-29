#include <iostream>
#include <cmath>
#include <numbers>

int main()
{
    double n;
    double r;
    std::cin >> n >> r;
    std::cout.precision(7);
    std::cout << std::sin(std::numbers::pi / n) * r / (1 - std::sin(std::numbers::pi / n));
    

    return 0;
}
