// не седелана
#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(0, "");


    int month;
    int day;


    cout << "[ + ] Месяца года" << endl;
    cout << "[ 1 ] Январь" << endl;
    cout << "[ 2 ] Февраль" << endl;
    cout << "[ 3 ] Март" << endl;
    cout << "[ 4 ] Апрель" << endl;
    cout << "[ 5 ] Май" << endl;
    cout << "[ 6 ] Июнь" << endl;
    cout << "[ 7 ] Июль" << endl;
    cout << "[ 8 ] Август" << endl;
    cout << "[ 9 ] Сентябрь" << endl;
    cout << "[ 10 ] Октябрь" << endl;
    cout << "[ 11 ] Ноябрь" << endl;
    cout << "[ 12 ] Декабрь" << endl;
    cout << endl;

    cout << "Выберите месяц: ";
    cin >> month;
    cout << "Выберите день: ";
    cin >> day;

    if (month == 1 or 3 or 5 or 7 or 9 or 11) {
        if (day < 32)
            cout << "Не верно" << endl;
    }
        else
            break;


    switch (month) {
    case 1:
        cout << day << " Января" << endl;
        break;
    case 2:
        cout << day << " Февраля" << endl;   
        break;
    case 3:
        cout << day << " Марта" << endl;
        break;
    case 4:
        cout << day << " Апреля" << endl;
        break;
    case 5:
        cout << day << " Марта" << endl;
        break;
    case 6:
        cout << day << " Июня" << endl;
        break;
    case 7:
        cout << day << " Июля" << endl;
        break;
    case 8:
        cout << day << " Августа" << endl;
        break;
    case 9:
        cout << day << " Сентября" << endl;
        break;
    case 10:
        cout << day << " Октября" << endl;
        break;
    case 11:
        cout << day << " Ноября" << endl;
        break;
    case 12:
        cout << day << " Декабря" << endl;
        break;
    default:
        cout << "Не правильно введен номер месяца!" << endl;
        break;
    }

    return 0;
}
