#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(0, "");

    int month;
    int day;

    cout << "[ $ ] Календарь" << endl;
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

    cout << "[ + ] Выберите месяц: ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Не правильно введен номер месяца!" << endl;
        return 1;
    }

    cout << "Выбран месяц — \"";
    switch (month) {
    case 1: cout << "Январь"; break;
    case 2: cout << "Февраль"; break;
    case 3: cout << "Март"; break;
    case 4: cout << "Апрель"; break;
    case 5: cout << "Май"; break;
    case 6: cout << "Июнь"; break;
    case 7: cout << "Июль"; break;
    case 8: cout << "Август"; break;
    case 9: cout << "Сентябрь"; break;
    case 10: cout << "Октябрь"; break;
    case 11: cout << "Ноябрь"; break;
    case 12: cout << "Декабрь"; break;
    }
    cout << "\"" << endl;

    cout << "Выберите день месяца: ";
    cin >> day;

    bool validDay = false;
    const char* monthName = nullptr;  // Инициализация

    switch (month) {
    case 1:
        monthName = "января";
        validDay = (day >= 1 && day <= 31);
        break;
    case 2:
        monthName = "февраля";
        validDay = (day >= 1 && day <= 28);
        break;
    case 3:
        monthName = "марта";
        validDay = (day >= 1 && day <= 31);
        break;
    case 4:
        monthName = "апреля";
        validDay = (day >= 1 && day <= 30);
        break;
    case 5:
        monthName = "мая";
        validDay = (day >= 1 && day <= 31);
        break;
    case 6:
        monthName = "июня";
        validDay = (day >= 1 && day <= 30);
        break;
    case 7:
        monthName = "июля";
        validDay = (day >= 1 && day <= 31);
        break;
    case 8:
        monthName = "августа";
        validDay = (day >= 1 && day <= 31);
        break;
    case 9:
        monthName = "сентября";
        validDay = (day >= 1 && day <= 30);
        break;
    case 10:
        monthName = "октября";
        validDay = (day >= 1 && day <= 31);
        break;
    case 11:
        monthName = "ноября";
        validDay = (day >= 1 && day <= 30);
        break;
    case 12:
        monthName = "декабря";
        validDay = (day >= 1 && day <= 31);
        break;
    }

    if (validDay) {
        cout << "Дата: " << day << " " << monthName << endl;
    }
    else {
        cout << "Неправильно введен день месяца!" << endl;
        return 1;
    }

    return 0;
}
