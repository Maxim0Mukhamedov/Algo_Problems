#include "iostream"
#include "string"
#include "vector"

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 0;
        char c = ' ';
        std::string s;
        std::cin >> n >> c >> s;
        int dist = 0;
        int maxDist = -1;
        for (int j = 0; j <= 2 * n; ++j) {
            if (s[j % n] == c && dist == 0 && c != 'g') {
                dist = 1;
            } else if (s[j % n] != 'g' && dist != 0) {
                dist += 1;
            } else if (s[j % n] == 'g') {
                maxDist = (dist > maxDist) ? dist : maxDist;
                dist = 0;
            }
        }
        std::cout << maxDist << '\n';
    }
}
