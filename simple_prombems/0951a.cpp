    #include <iostream>
     
    int main() {
        int n,k;
        std::cin >> n >> k;
        int a_i;
        int m = -1;
        for (int i = 0; i < n; i += 1) {
            std::cin >> a_i;
            if (a_i <= k && k % a_i == 0) {
                if (a_i > m) {
                    m = a_i;
                }
            }
        }
        std::cout << k / m;
    }

