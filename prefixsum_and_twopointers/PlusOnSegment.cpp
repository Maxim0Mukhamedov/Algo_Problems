#include <vector>
#include <iostream>

int main () {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n = 0;
	std::cin >> n;
	std::vector<long long> a(n + 1, 0);
	std::vector<long long> ps(n + 1, 0);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i + 1];
		ps[i] += a[i + 1] - a[i];
	}
	int q = 0;
	std::cin >> q;
	int l = 0, r = 0, d = 0;
	for (int i = 0; i < q; i++) {
		std::cin >> l >> r >> d;
		l -= 1;
		ps[l] += d;
		ps[r] -= d;
	}
	for (int i = 0; i < n; i ++) {
		a[i + 1] = ps[i] + a[i];
		std::cout << a[i + 1] << ' ';
	}
}
