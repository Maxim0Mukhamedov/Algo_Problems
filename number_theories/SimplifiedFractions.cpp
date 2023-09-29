#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) { 
	return b ? gcd(b,a % b) : a;
}

int main() {
	int x = 0;
	std::vector<std::string> ans;
	std::cin >> x;
	for (int d = 2; d <= x; d++) {
		for (int n = 1; n < d; n++) {
			if (gcd(d,n) == 1) {
				ans.push_back(std::to_string(n) + "/" + std::to_string(d));
			}
		}
	}
	for (auto s : ans) {
		std::cout << s << ' ';
	}
}
