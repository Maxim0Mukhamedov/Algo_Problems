    #include <iostream>
    #include <algorithm>
    #include <vector>
     
    int main() {
        int a,b,c = 0,n = 0;
        std::cin >> a >> c;
        std::vector<int> y1,y2,ans;
        while (std::max(a,c)) {
            y1.push_back(a % 3);
            y2.push_back(c % 3);
            a /= 3;
            c /= 3;
            n += 1;
        }
        for (int i = 0; i < n; i += 1) {
            if (y2[i] - y1[i] >= 0) {
                ans.push_back(y2[i] - y1[i]);
            } else {
                ans.push_back(3 - y1[i] + y2[i]);
            }
        }
        int d = 1;
        for (int i = 0; i < n; i += 1) {
            c += ans[i] * d;
            d *= 3;
        }
        std::cout << c;
    }
