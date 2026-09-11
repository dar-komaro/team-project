// Командный проект. Группа ПИ-52.
// Команда: Паршукова (в. 63), Лацкова (в. 25), Комаровская (в. 27, техлид).

#include <iostream>
#include <windows.h>
#include <windows.h> 
#define g 9.81

// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "parshukova.h"
#include "latskova.h"
#include "komarovskaya.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===

using namespace std;

int main() {

	double m, V, rho, E, h, value;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;
	do {
		cout << "\n=== Командный проект: сборник расчётов ===\n";
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		cout << "1. Плотность\n";
		cout << "2. Масса\n";
		cout << "3. Объем\n";
		cout << "4. Потенциальная энергия\n";
		cout << "5. Высота через энергию\n";
        cout << "6. Километры -> Мили\n";
        cout << "7. Мили -> Километры\n";
		// === КОНЕЦ БЛОКА МЕНЮ ===
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;
		switch (choice) {
			// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
		case 1:
			try {
				cout << "Введите массу m и объем V: ";
				cin >> m >> V;
				cout << "Плотность = " << density(m, V) << "\n";
			}
			catch (const invalid_argument& e) {
				cerr << e.what() << "\n";
			}
			break;
		case 2:
			try {
				cout << "Введите плотность rho и объем V: ";
				cin >> rho >> V;
				cout << "Масса = " << massFromDensity(rho, V) << "\n";
			}
			catch (const invalid_argument& e) {
				cerr << e.what() << "\n";
			}
			break;
		case 3:
			try {
				cout << "Введите массу m и плотность rho: ";
				cin >> m >> rho;
				cout << "Объем = " << volumeFromDensity(m, rho) << "\n";
			}
			catch (const invalid_argument& e) {
				cerr << e.what() << "\n";
			}
			break;
		case 4:
			cout << "Введите массу m и высоту h: ";
			cin >> m >> h;
			try {
				double result = potentialEnergy(m, h);
					cout << " Потенциальная энергия = " << result << "\n";
			}
			catch (const invalid_argument& e) {
				cerr << e.what() << "\n";
			}
			break;
		case 5:
			cout << "Введите энергию E и массу m: ";
			cin >> E >> m;
			try {
				double result = heightFromEnergy(E, m);
				cout << " Высота = " << result << "\n";
			}
			catch (const invalid_argument& e) {
				cerr << e.what() << "\n";
			}
			break;
case 6:
                cout << "Введите километры: ";
				cin >> value;
                cout << value << " км = " << kmToMiles(value) << " миль\n";
                break;
                
            case 7:
                cout << "Введите мили: ";
				cin >> value;
                cout << value << " миль = " << milesToKm(value) << " км\n";
                break;
			// === КОНЕЦ БЛОКА ОБРАБОТКИ ===
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}

