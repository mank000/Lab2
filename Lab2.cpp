#include <iostream>
#include <clocale>
using namespace std;
/*
* @brief ЛР№2/ Линейный вычислительный процесс.
* 1. Дано значение угла α в градусах (0 ≤ α < 360). Найти значение угла в радианах.
*/
auto solution_1() {
    const double PI = 3.14159265358979323846;
    float UserAngle;
    cout << "Введите число градусов.\n";
    cin >> UserAngle;
    if ((UserAngle >= 0) and (UserAngle < 360)) return ((PI * UserAngle) / 180);    
    return 0.0; 
}
//2.Дано трехзначное число. Вывести первую цифру числа.
auto solution_2() {
    int UserNumber;
    cout << "Напишите трёх значное число.\n";
    cin >> UserNumber;
    if ((UserNumber / 100 < 10) and (UserNumber / 100 != 0)) return (UserNumber / 100); 
    return 0;
}
int main() {
    setlocale(LC_ALL, "ru");
    int UserChoise;
    while (true) {
        cout << "Здравствуйте, напишите номер подпрограммы, в которую хотите попасть\n(1 или 2 для выхода введите -1)\n";
        cin >> UserChoise;
        if (UserChoise == 1) cout << solution_1();
        else if (UserChoise == 2) cout << solution_2();
        else if (UserChoise == -1) break;
        else cout << "Неправильная цифра!";
        cout << "\n";
    }
}