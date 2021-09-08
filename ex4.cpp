#include <iostream>

int main() {

	int x = 5, y = 9;
	x = y - x;
	y = y - x;
	x = y + x;
	std::cout << "x = " << x << "\n" << "y = " << y;
	
	return 0;
}