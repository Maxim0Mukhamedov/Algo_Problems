    #include <iostream>
     
    int main()
    {
        long long int x;
        std::cin >> x;
        int cnt = 0;
        while (x){
            if (x % 10 == 7 || x % 10 == 4){
                cnt += 1;
            }
            x /= 10;
        }
        int ok = cnt;
        while (cnt){
            if (cnt % 10 != 7 && cnt % 10 != 4){
                ok = 0;
            }
            cnt /= 10;
        }
        if (ok){
            std::cout << "YES";
        } else {
            std::cout << "NO";
        }
    }
