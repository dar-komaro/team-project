// Командный проект. Группа ПИ-52.
// Команда: Паршукова (в. 63), Лацкова (в. 25), Комаровская (в. 27, техлид).

#include <iostream>
#include <iostream>
#include <windows.h> 


// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
 #include "parshukova.h"
// #include "latskova.h"
// #include "komarovskaya.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===

using namespace std;


int main() {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int choice;
double value; 
do {
cout << "\n=== Командный проект: сборник расчётов ===\n";

// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
cout << "6. Километры -> Мили\n";
cout << "7. Мили -> Километры\n";
// === КОНЕЦ БЛОКА МЕНЮ ===

cout << "0. Выход\n";
cout << "Выберите пункт: ";
cin >> choice;
switch (choice) {
// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
 case 6:
                cout << "Введите километры: ";
                if (!checkInput(value)) break;
                cout << value << " км = " << kmToMiles(value) << " миль\n";
                break;
 case 7:
                cout << "Введите мили: ";
                if (!checkInput(value)) break;
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
