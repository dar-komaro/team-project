#include "komarovskaya.h"
#include <stdexcept>

using namespace std;

// Плотность
double density(double m, double V) {
	if (V <= 0)throw invalid_argument("Объем не может быть отрицательным или равным нулю!");
	if (m < 0)throw invalid_argument("Масса не может быть отрицательной или равна нулю!");
	return m / V;
}

//Масса
double massFromDensity(double rho, double V) {
	if (V < 0)throw invalid_argument("Объем не может быть отрицательным или равным нулю!");
	if (rho <= 0)throw invalid_argument("Плотность не может быть отрицательной или равной нулю!");
	return rho * V;
}

//Объем 
double volumeFromDensity(double m, double rho) {
	if (rho <= 0)throw invalid_argument("Плотность не может быть отрицательной или равной нулю!");
	if (m < 0)throw invalid_argument("Масса не может быть отрицательной или равна нулю!");
	return m / rho;
}
