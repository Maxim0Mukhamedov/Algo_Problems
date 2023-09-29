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

using namespace std;

using Giper5D = vector<vector<vector<vector<vector<long long>>>>>;
using Giper4D = vector<vector<vector<vector<long long>>>>;
using Giper3D = vector<vector<vector<long long>>>;
using Giper2D = vector<vector<long long>>;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	Giper5D a(n1 + 1, Giper4D(n2 + 1,Giper3D(n3 + 1,Giper2D(n4 + 1,vector<long long>(n5 + 1)))));
	Giper5D ps(n1 + 1, Giper4D(n2 + 1,Giper3D(n3 + 1,Giper2D(n4 + 1,vector<long long>(n5 + 1)))));
	for (int i1 = 1; i1 <= n1, i1++)
		for (int i2 = 1; i2 <= n2, i2++)
			for (int i3 = 1; i3 <= n3, i3++)
				for (int i4 = 1; i4 <= n4, i4++)
					for (int i5 = 1; i5 <= n5, i5++) {
						cin >> a[i1][i2][i3][i4][i5];
						ps[i1 + 1][i2 + 1][i3 + 1][i4 + 1][i5 + 1] = ps[i1 + 1][i2 + 1][i3 + 1][i4 + 1][i5 + 1] + ps[i1 + 1][i2 + 1][i3 + 1][i4 + 1][i5 + 1] +ps[i1 + 1][i2 + 1][i3 + 1][i4 + 1][i5 + 1] +
	ps[i1 + 1][i2 + 1][i3 + 1][i4 + 1][i5 + 1] +ps[i1 + 1][i2 + 1][i3 + 1][i4 + 1][i5 + 1] +				}
}
