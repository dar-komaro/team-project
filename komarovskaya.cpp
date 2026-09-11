#include "komarovskaya.h"

double density(double m, double V) {
    return m / V;
}

double massFromDensity(double rho, double V) {
    return rho * V;
}

double volumeFromDensity(double m, double rho) {
    return m / rho;
}
