// Командный проект. Группа ПИ-52.
// Команда: Паршукова (в. 63), Лацкова (в. 25), Комаровская (в. 27, техлид).

#include <iostream>
#include <iostream>
#include <windows.h> 


// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
// #include "parshukova.h"
#include "latskova.h"
// #include "komarovskaya.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===

using namespace std;


int main() {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int choice;
do {
cout << "\n=== Командный проект: сборник расчётов ===\n";

// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
cout << "4. Потенциальная энергия\n";
cout << "5. Высота через энергию\n";
// === КОНЕЦ БЛОКА МЕНЮ ===

cout << "0. Выход\n";
cout << "Выберите пункт: ";
cin >> choice;
switch (choice) {
// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
case 4:
	cout << "Введите массу m и высоту h: ";
	cin >> m >> h;
	try {
		double result = potentialEnergy(m, h)
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
