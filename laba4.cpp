#include <iostream>
#include <windows.h>

#include "Arctg.h"
#include "Arcctg.h"
#include "Enums.h"

void main()
{
	SetConsoleOutputCP(CP_UTF8);
	int functionCode;

	std::cout << "Введите номер функции из предложенных (" << static_cast<int>(Function::ARCTG) << " - арктангенс, "
		<< static_cast<int>(Function::ARCCTG) << " - арккотангенс):" << std::endl;

	std::cin >> functionCode;

	std::cout << "Допустимые значения x: -sqrt(3) ||| -1 ||| -(1 / sqrt(3)) ||| 0 ||| 1 / sqrt(3) ||| 1 ||| sqrt(3)" << std::endl;

	switch (functionCode)
	{
		case Function::ARCTG:
		{
			int x_value;

			std::cout << "Введите значение x: ";
			std::cin >> x_value;

			Arctg arctg = Arctg(x_value);
			std::cout << "Значение функции — " << arctg.get_function_value() << std::endl;
			std::cout << "Производная — " << arctg.get_derivative().get_result() << std::endl;
			break;
		}

		case Function::ARCCTG:
		{
			int x_value;

			std::cout << "Введите значение x: ";
			std::cin >> x_value;

			Arcctg arcctg = Arcctg(x_value);
			std::cout << "Значение функции — " << arcctg.get_function_value() << std::endl;
			std::cout << "Производная — " << arcctg.get_derivative().get_result() << std::endl;

			break;
		}

		default:
		{
			std::cout << "Введите цифру от 1 до 2 (1 - арктангенс, 2 - арккотангенс:" << std::endl;
			break;
		}
	}
}