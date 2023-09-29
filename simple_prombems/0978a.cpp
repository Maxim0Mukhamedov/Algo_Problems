#include <iostream>
#include <vector>
#include <array>


int main(){
    int n;
    std::cin >> n;
    std::vector<int> a(n); // исходный массив
    std::array<int, 1001> s{0}; // массив уникальных элементов
    
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
        s[a[i]] += 1;
    }
    
    std::vector<int> ans;
    for (int i = 0; i < n; i += 1) {
        if (s[a[i]] == 1){
            ans.push_back(a[i]);
        } else {
            s[a[i]] -= 1;
        }
    }
    std::cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i += 1) {
        std::cout << ans[i] << ' ';
    }
}
