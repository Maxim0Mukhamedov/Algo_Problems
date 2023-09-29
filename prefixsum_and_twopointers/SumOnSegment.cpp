#include <iostream>
#include <vector>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n = 0;
	std::cin >> n;
	std::vector<long long> a(n, 0);
	std::vector<long long> ps(n + 1, 0);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		ps[i + 1] += ps[i] + a[i];
	}
	int q = 0;
	std::cin >> q;
	int l = 0, r = 0;
	for (int i = 0; i < q; i++) {
		std::cin >> l >> r;
		std::cout << static_cast<long long>(ps[r] - ps[l-1]) << '\n';
	}
}

