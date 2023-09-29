    #include <iostream>
     
    int main()
    {
        int n = 25;
        int x;
        for (int i = 1; i <= n; i += 1) {
            std::cin >> x;
            if (x) {
                int c = i % 5;
                int r = i / 5 + 1;
                if (c == 0) {
                    r -= 1;
                    c = 1;
                }
                std::cout << abs(3 - c) + abs(3 - r);
            }
        }
    }
