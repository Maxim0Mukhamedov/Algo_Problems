#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int d;
    int n;
    int k;
    char cur;
    int t = 0;
    int cnt;
    int last_es;
    int es;
    int w,j,i;
    std::string s;
    std::cin >> t;
    for (i = 0; i < t; ++i) {
        std::cin >> n;
        std::cin >> s;
        std::cin >> k;
        std::vector<int> a(26,0);
        for (j = 0; j < k; ++j) {
            std::cin >> cur;
            a[cur - 'a'] = 1;
        }
        cnt = 0;
        last_es = 0;
        es = 0;
        std::vector<int> way;
        for (w = 1; w < n; ++w) {
            if (a[s[w] - 'a'] == 1) {
                way.push_back(w - last_es);
                last_es = w;
                es += 1;
            }
        }
        d = 0;
        for (w = 0; w < es; ++w) {
            cnt += way[w] - d > 0 ? way[w] - d : 0;
            d = cnt;
        }
        std::cout << cnt << '\n';
    }

    return 0;
}
