#include <iostream>
#include <clocale>
using namespace std;
int main()
{   
    const long float pi = 3.14159265358979323846;
    setlocale(LC_ALL, "ru");
    while (true) {
        cout << "Введите число градусов,для выхода из программы напишите -1\n";
        float UserAngle;
        cin >> UserAngle;
        if ((UserAngle >= 0) and (UserAngle < 360)) cout << ((pi * UserAngle) / 180) << "\n";
        else if (UserAngle == -1) break;
        else { cout << "Неверный угол.\n"; };
    }
}
