    #include <iostream>
     
    int main()
    {
        int n; //кол-во чисел
        std::cin >> n;
        int x; //текущее число
        int cx; //копия текущего числа
        int nz; //кол-во ненулевых разрядов
        int r; //текущий разряд
        int d; //степень 10 текущего разряда
        for (int i = 0; i < n; i += 1){
            nz = 0;
            std::cin >> x;
            cx = x;
            while (cx){
                r = cx % 10;
                if (r){
                    nz += 1;
                }
                cx /= 10;
            }
            std::cout << nz << '\n';
            d = 1;
            while(x){
                r = x % 10;
                if(r){
                    std::cout << r*d << ' ';
                }
                d *= 10;
                x /= 10;
            }
            std::cout << '\n';
        }
    }
