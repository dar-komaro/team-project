#include "latskova.h"
#include <cmath>

double potentialEnergy(double m, double h) {
	if (m < 0)throw invalid_argument("ћасса не может быть отрицательной!");
	return m * h * g;
}

double heightFromEnergy(double E, double m) {
	if (m = < 0)throw invalid_argument("ћасса не может быть отрицательной или равной нулю!");
	return E / (m * g);
}