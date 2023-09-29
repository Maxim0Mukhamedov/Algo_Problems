    #include <iostream>
     
    int main()
    {
        long int x,n;
        std::cin >> x >> n;
        for (int i = 0; i < n; i += 1){
            if (x % 10 != 0){
                x -= 1;
            } else {
                x /= 10;
            }
        }
        std::cout << x;
    }
