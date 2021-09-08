#include <iostream>
#include <cmath>
#include <limits>
#include <math.h>

int main() {
	double a, b, c, d, x1, x2;
	std::cout << "ax^2 + bx + c = 0" << "\n" << "Enter coefficients: " << "\n";
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;
	const double epsilon = std::numeric_limits <double> ::epsilon();
	d = pow(b, 2) - 4 * a * c;
	if ((abs(d) <= epsilon) and (abs(a) > epsilon)) {
		x1 = -b / (2 * a);
		if (abs(x1) <= epsilon) {
			x1 = 0.0;
			std::cout << "x = " << x1;
		}
		else {
			std::cout << "x = " << x1;
		}
	}
	else if ((d > 0) and (abs(a) > epsilon)) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		std::cout << "x1 = " << x1 << "\n" << "x2 = " << x2;
	}
	else if (abs(a) <= epsilon) {
		if (abs(b) >= epsilon) {
			x1 = -c / b;
			if (abs(x1) <= epsilon) {
				x1 = 0.0;
				std::cout << "x = " << x1;
			}
			else {
				std::cout << "x = " << x1;
			}
		}
		else if (abs(c) <= epsilon) {
			std::cout << "All real numbers";
		}
		else {
			std::cout << "No solution";
		}
	}
	else {
		std::cout << "No solution";
	}
	return 0;
}