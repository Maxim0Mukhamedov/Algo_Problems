#include "iostream"
#include "vector"
#include "set"
 
int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> last_visit;
 
    int ai = 0;
    for (int i = 0; i < n; i += 1) {
        std::cin >> ai;
        last_visit.push_back(ai);
    }
    int max_dist = -1;
    int ans = 0;
    std::set<int> contain;
    for (int i = n - 1; i > -1; i -= 1) {
        if (contain.find(last_visit[i]) == contain.end()) {
            if (n - i > max_dist) {
                max_dist = n - i;
                ans = last_visit[i];
            }
            contain.insert(last_visit[i]);
        }
    }
    std::cout << ans;
}
