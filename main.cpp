// Командный проект. Группа ПИ-52.
// Команда: Паршукова (в. 63), Лацкова (в. 25), Комаровская (в. 27, техлид).

#include <iostream>
#include <iostream>
#include <windows.h> 


// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
// #include "parshukova.h"
// #include "latskova.h"
#include "komarovskaya.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===

using namespace std;


int main() {
	double m, V, rho;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;
	do {
		cout << "\n=== Командный проект: сборник расчётов ===\n";

		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		cout << "1. Плотность\n";
		cout << "2.Масса\n";
		cout << "3.Объем\n";
		// === КОНЕЦ БЛОКА МЕНЮ ===


		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;
		switch (choice) {
			// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
		case 1:
			cout << "Введите массу m и объем V: ";
			cin >> m >> V;
			cout << "Плотность = " << density(m, V) << "\n";
			break;
		case 2:
			cout << "Введите плотность rho и объем V: ";
			cin >> rho >> V;
			cout << "Масса = " << massFromDensity(rho, V) << "\n";
			break;
		case 3:
			cout << "Введите массу m и плотность rho: ";
			cin >> m >> rho;
			cout << "Объем = " << volumeFromDensity(m, rho) << "\n";
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
