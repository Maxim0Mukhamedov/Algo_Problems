#include <iostream>
#include <vector>
#include <string>

int main()
{
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i += 1) {
		int n = 0;
		std::cin >> n;
		int a_i = 0;
		std::vector<int> a;
		for (int j = 0; j < n; j += 1) {
			std::cin >> a_i;
			a.push_back(a_i);
		}
		std::string s = "";
		int k = 0;
		for (int j = 0; j < n; j += 1) {
			std::cin >> k;
			std::cin >> s;
			for (int l = 0; l < k; l += 1) {
				if (s[l] == 'U') {
					a[j] -= 1;
					if (a[j] == -1) {
						a[j] = 9;
					}
				}
				else {
					if (s[l] == 'D') {
						a[j] += 1;
						if (a[j] == 10) {
							a[j] = 0;
						}
					}
				}
			}
		}
		for (int j : a) std::cout << j << ' ';
		std::cout << std::endl;
	}
    return 0;
}
