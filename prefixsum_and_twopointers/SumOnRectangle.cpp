#include <iostream>
#include <vector>

/* {
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
	int l = 0, r = td0;
	for (int i = 0; i < q; i++) {
		std::cin >> l >> r;
		std::cout << static_cast<long long>(ps[r] - ps[l-1]) << '\n';
	}
}
*/
int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n = 0;
	int m = 0;
	std::cin >> n >> m;
	std::vector<std::vector<long long>> a(n + 1,std::vector<long long>(m + 1,0));
	std::vector<std::vector<long long>> ps(n + 1,std::vector<long long>(m + 1,0));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			std::cin >> a[i][j];
	                ps[i + 1][j + 1] = ps[i][j + 1] + ps[i + 1][j] - ps[i][j] + a[i][j];
		}
	int q = 0;
	std::cin >> q;
	for (int i = 0; i < q; i++) {
		int lx = 0, ly = 0, rx = 0, ry = 0;
		std::cin >> lx >> ly >> rx >> ry;
		lx--;
		ly--;
		std::cout << ps[rx][ry] - ps[rx][ly] - ps[lx][ry] + ps[lx][ly] << '\n';
	}
}
