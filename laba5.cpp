#include <iostream>
using namespace std;

bool IsLeapYear(int year)
{
    if (year < 0)
        throw "Negative year";
    if (year > 1000000)
        throw "Future year";
    return ((year % 4 == 0 && year % 100 != 0) || (year % 100 != 0 && year % 400 == 0));
}
int main()
{
    setlocale(LC_ALL, "rus");
    int year;
    cout << "Введите год: ";
    cin >> year;
    try {
        if (IsLeapYear(year))
            cout << year << " этот год високосный!\n";
        else
            cout << year << " этот год не високосный!\n";
    }
    catch (char* i) {
        cout << "Ошибка:" << i << endl;
    }
    system("pause");
    return 0;;
}
