    #include <iostream>
    #include <array>
     
    int main() {
        int t;
        std::cin >> t;
        for (int i = 0; i < t; i += 1) {
            std::array<int,201> a{0};
            int n,x;
            std::cin >> n >> x;
            for (int j = 0; j < n; j += 1) {
                int aj;
                std::cin >> aj;
                a[aj] = 1;
            }
            int ans = 0;
            while (ans < 100 + x) {
                if (a[ans + 1] == 0) {
                    x -= 1;
                    if (x == -1) {
                        x = 0;
                        break;
                    }
                }
                ans += 1;
            }
            std::cout << ans + x << '\n';
        }
        return 0;
    }
