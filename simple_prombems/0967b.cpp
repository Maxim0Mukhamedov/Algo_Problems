#include "iostream"
#include "vector"
 
int main() {
    int n = 0;
    int A = 0;
    int B = 0;
    std::cin >> n >> A >> B;
    int s1 = 0;
    std::cin >> s1;
    std::vector<int> pipes;
    int si = 0;
    int sum_of_s = s1;
    for (int i = 1; i < n; i += 1) {
        std::cin >> si;
        sum_of_s += si;
        pipes.push_back(si);
    }
    std::sort(pipes.begin(),pipes.end());
    int ans = 0;
    int j = n - 2;
    while (((double)s1 * (double )A / (double)sum_of_s) < B && j > -1) {
        sum_of_s -= pipes[j];
        ans += 1;
        j -= 1;
    }
    std::cout << ans;
}
