#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
	double valueSI, valueCGS = 0.0;
	const double m_cm = 100.0, kg_g = 1000.0, w_ergs = 1e7, pa_ba = 10.0;
	std::string unitSI, unitCGS;
	std::cout << "SI unit (m, kg, s, W, Pa): ";
	std::cin >> unitSI;
	std::cout << "SI value: ";
	std::cin >> valueSI;
	if (unitSI == "m") {
		unitCGS = "cm";
		valueCGS = valueSI * m_cm;
	}
	else if (unitSI == "kg") {
		unitCGS = "g";
		valueCGS = valueSI * kg_g;
	}
	else if (unitSI == "s") {
		unitCGS = "s";
		valueCGS = valueSI;
	}
	else if (unitSI == "W") {
		unitCGS = "erg/s";
		valueCGS = valueSI * w_ergs;
	}
	else if (unitSI == "Pa") {
		unitCGS = "Ba";
		valueCGS = valueSI * pa_ba;
	}
	std::cout << std::setprecision(1) << std::fixed << valueSI << " " << unitSI << " = " << std::setprecision(1) << std::fixed << valueCGS << " " << unitCGS;
	return 0;
}
