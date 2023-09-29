#include <iostream>
#include <vector>
#include "algorithm"
 
int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> sum_of_points;
    int a = 0;
    int g = 0;
    int m = 0;
    int h = 0;
 
    int sum_of_tom = 0;
    std::cin >> a >> g >> m >> h;
    sum_of_tom = a + g + m + h;
    sum_of_points.push_back(sum_of_tom);
 
    for(int i = 1; i < n; i += 1) {
        std::cin >> a >> g >> m >> h;
        sum_of_points.push_back((a + g + m + h));
    }
    std::sort(sum_of_points.begin(), sum_of_points.end());
 
    int place = 1;
    for(int i = n - 1; i > -1; i -= 1) {
        if (sum_of_points[i] != sum_of_tom) {
            place += 1;
        } else {
            break;
        }
    }
    std::cout << place;
}
