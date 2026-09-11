#include "parshukova.h"
#include <iostream>
using namespace std;

// Километры → мили
double kmToMiles(double km) {
    return km * 0.621371;
}

// Мили → километры
double milesToKm(double miles) {
    return miles * 1.609344;
}

// Проверка ввода: буквы и отрицательные числа
bool checkInput(double& value) {
    if (!(cin >> value)) {
        cout << "Ошибка: введите число!\n";
        cin.clear();
        cin.ignore(10000, '\n');
        return false;
    }
    if (value < 0) {
        cout << "Ошибка: число не может быть отрицательным!\n";
        return false;
    }
    return true;
}