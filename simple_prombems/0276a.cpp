        #include <iostream>
         
        int main()
        {
            int n,k;
            std::cin >> n >> k;
            int f,t;
            long int mf = -1*10e9;
            for (int i = 1; i <= n; i += 1){
                std::cin >> f >> t;
                if (t > k){
                    f -= (t - k);
                }
                if (f > mf){
                    mf = f;
                }
            }
            std::cout << mf;
        }
