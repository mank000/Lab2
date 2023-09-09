#include <iostream>
#include <clocale>
using namespace std;
int solution_1() {
    const double pi = 3.14159265358979323846;
    float UserAngle;
    while (true) {
        cout << "Введите число градусов,для выхода из подпрограммы напишите -1\n";
        cin >> UserAngle;
        if ((UserAngle >= 0) and (UserAngle < 360)) cout << ((pi * UserAngle) / 180) << "\n";
        else if (UserAngle == -1) break;
        else { cout << "Неверный угол.\n"; };
    }
}
int solution_2() {
    int UserNumber;
    while (true) {
        cout << "Print 3\n";
        cin >> UserNumber;
        if ((UserNumber / 100 < 10) and (UserNumber / 100 != 0)) cout << "First number is..." << (UserNumber / 100) << "\n";
        else if (UserNumber == -1) break;
        else { cout << "Число должно быть трёхзначным!\n"; };

    }
}
int main() {
    setlocale(LC_ALL, "ru");
    cout << "Здравствуйте, напишите номер подпрограммы, в которую хотите попасть\n (1 или 2 для выхода введите -1)\n";
    int UserChoise;
    while (true) {
        cin >> UserChoise;
        if (UserChoise == 1) solution_1();
        else if (UserChoise == 2) solution_2();
        else if (UserChoise == -1) break;
        else cout << "Неправильная цифра!";
    }
    /**switch (UserChoise)
    {
    case 1: solution_1();
    case 2: solution_2();
    case -1: exit;
    default: cout << "Неправильная цифра!\n"; break;
    }
    */

}
