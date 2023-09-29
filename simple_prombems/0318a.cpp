#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    long long k,n;
    long long ans;
    std::cin >> n >> k;
    if (k  > (n % 2 == 0 ? n/2 : n/2 + 1)) {
        k -= (n % 2 == 0 ? n/2 : n/2 + 1);
        ans = 2 + 2*(k - 1);
    } else {
        ans = 1 + 2*(k - 1);
    }
    std::cout << ans;
}
