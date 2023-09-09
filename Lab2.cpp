#include <iostream>
#include <clocale>
using namespace std;
auto solution_1() {
    const double pi = 3.14159265358979323846;
    float UserAngle;
        cout << "Введите число градусов\n";
        cin >> UserAngle;
        if ((UserAngle >= 0) and (UserAngle < 360)) return ((pi * UserAngle) / 180);
        else return 0.0;
}
auto solution_2() {
    int UserNumber;
        cout << "Print 3\n";
        cin >> UserNumber;
        if ((UserNumber / 100 < 10) and (UserNumber / 100 != 0)) return (UserNumber / 100);
        else return 1;
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
    /**switch (UserChoise)
    {
    case 1: solution_1();
    case 2: solution_2();
    case -1: exit;
    default: cout << "Неправильная цифра!\n"; break;
    }
    */

}
