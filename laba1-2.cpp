#include  <iostream>
#include <math.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Payment
{
public:
	string fio;
	float oklad;
	int year;
	float procent;
	float nalog;
	float rab_day_month;
	float day_month;
	float nach_summ;
	float yder_summ;
	int stag;
	float zp;

	float vichisl_nach_summ();
	float vichisl_yder_summ();
	float vichisl_zp();
	float vichisl_stag();
};

float Payment::vichisl_nach_summ()
{
	return (oklad * rab_day_month);
}

float Payment::vichisl_yder_summ()
{
	return (nach_summ * 0.01 + nach_summ * 0.13);
}

float Payment::vichisl_zp()
{
	return (rab_day_month * oklad - (rab_day_month * oklad * 0.13));
}

float Payment::vichisl_stag()
{
	return (2021 - year);
}

void main()
{
	setlocale(LC_CTYPE, "rus");
	Payment human;
	cout << "Введите фамилию сотрудника - ";
	cin >> human.fio;
	cout << "Введите оклад сотрудника  - ";
	cin >> human.oklad;
	cout << "Введите год поступления сотрудника на работу - ";
	cin >> human.year;
	cout << "Введите процент надбавки - ";
	cin >> human.procent;
	cout << "Введите кол-во отработанных дней - ";
	cin >> human.rab_day_month;
	cout << endl;
	cout << "Начисленная сумма составляет: " << human.vichisl_nach_summ() << "\n";
	cout << "Удержанная сумма составляет: " << human.vichisl_yder_summ() << "\n";
	cout << "Сумма, выдаваемая на руки составляет: " << human.vichisl_zp() << "\n";
	cout << "Стаж составляет: " << human.vichisl_stag() << "\n";
}
