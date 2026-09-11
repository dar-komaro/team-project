#include "parshukova.h"
#include <iostream>
using namespace std;

// Километры → мили
double kmToMiles(double km) {
    if (km < 0) {
        cout << "Ошибка: расстояние не может быть отрицательным!\n";
        return 0;
    }
    return km * 0.621371;
}

// Мили → километры
double milesToKm(double miles) {
    if (miles < 0) {
        cout << "Ошибка: расстояние не может быть отрицательным!\n";
        return 0;
    }
    return miles * 1.609344;
}

