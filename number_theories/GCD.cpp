#include <iostream>

int GCD(int a, int b) {
	return b ? GCD(b,a%b) : a;
}
int main() {
	std::cout << GCD(8,12);
	return 0;
}
