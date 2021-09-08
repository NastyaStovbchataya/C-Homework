#include <iostream>
#include <cmath>

int main() {
	double valueSI, valueCGS = 0;
	std::string unitSI, unitCGS;
	std::cout << "SI unit (m, kg, s, W, Pa): ";
	std::cin >> unitSI;
	std::cout << "SI value: ";
	std::cin >> valueSI;
	if (unitSI == "m") {
		unitCGS = "cm";
		valueCGS = valueSI * 100;
	}
	else if (unitSI == "kg") {
		unitCGS = "g";
		valueCGS = valueSI * 1000;
	}
	else if (unitSI == "s") {
		unitCGS = "s";
		valueCGS = valueSI;
	}
	else if (unitSI == "W") {
		unitCGS = "erg/s";
		valueCGS = valueSI * pow(10, 7);
	}
	else if (unitSI == "Pa") {
		unitCGS = "Ba";
		valueCGS = valueSI * 10;
	}
	std::cout << valueSI << " " << unitSI << " = " << valueCGS << " " << unitCGS;
	return 0;
}