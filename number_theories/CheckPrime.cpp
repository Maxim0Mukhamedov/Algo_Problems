#include <iostream>
#include <cmath>

int main() {
	int a = 0;
	std::cin >> a;
	bool ans = true;
	for (int i = 2; i <= static_cast<int>(std::sqrt(a)); i++) {
		if (a % i == 0) {
			ans = false;
		}
	}
	std::cout << ans;
	return 0;
}
