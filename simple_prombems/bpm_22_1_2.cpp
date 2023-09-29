#include <algorithm>
#include <iostream>
#include <iomanip>

int main() {
    double cnt = 0;
    double cnt_in = 0;
    double x = 0;
    double y = 0;
    while (std::cin >> x >> y) {
        if (y >= (2 - x*x) && y*y <= 4 - x*x && x*x <= 4) {
            cnt_in += 1;
        }
        cnt += 1;
    }
    std::cout << cnt_in / cnt << std::endl;
    system("pause");
}