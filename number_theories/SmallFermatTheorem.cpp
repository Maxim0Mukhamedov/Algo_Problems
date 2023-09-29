#include <iostream>
#include <vector>
#include <cmath>
#include "EratosthenesGrid.cpp" 
int main () {
	int a = 0;
	std::cin >> a;
	std::vector<char> grid = ero::generogrid(a + 1000); // It isn't correct!
	int p = 0;
	for (p = a + 1; !grid[p]; p++);
	std::cout << p << std::endl;
	std::cout << static_cast<int>(std::pow(a,p-1)) % p; 
}
