#include <iostream>
#include <set>

int main() {
    std::set<int> a;
    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    bool er = false;
    while (!a.contains(n % m)) {
        a.insert(n % m);
        n = (n % m) * 2;
        if (n == 0) {
            er = true;
            break;
        }
    }
    if (er) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}
