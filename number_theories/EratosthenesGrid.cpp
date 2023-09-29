#include <vector>

// True - number is prime

namespace ero {
	std::vector<char> generogrid(const int& n) {
		std::vector<char> grid(n + 1, true);
		grid[0] = grid[1] = false;
		for (int i = 2; i <= n; i++) {
			if(grid[i] == true) {
				if (i * 1ll * i <= n) {
					for (int j = i * i; j <= n; j += i) {
						grid[j] = false;
					}
				}
			}
		}
		return grid;
	}
}



