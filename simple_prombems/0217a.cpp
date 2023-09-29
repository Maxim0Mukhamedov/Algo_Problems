    #include <iostream>
     
    int main()
    {
        int y = 0;
        std::cin >> y;
        for (y += 1; y <= 9999; y += 1 ) {
            int s1 = y / 1000;
            int s2 = (y - (1000 * s1)) / 100;
            int s3 = (y - (1000 * s1) - 100 * s2) / 10;
            int s4 = y % 10;
            bool b = s1 != s2;
            bool b1 = s1 != s3;
            bool b2 = s1 != s4;
            bool b3 = s2 != s3;
            bool b4 = s2 != s4;
            bool b5 = s3 != s4;
            if (b1 && b2 && b3 && b4 && b5 && b) {
                std::cout << y;
                break;
            }
        }
    }
