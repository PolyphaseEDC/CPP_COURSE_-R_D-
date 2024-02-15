#include <iostream>
#include<iomanip>
#include<string.h>

enum class DayOfWeek
{
	Monday = 1,
	Tuesday = 2,
	Wednesday = 3,
	Thursday = 4,
	Friday = 5,
	Saturday = 6,
	Sunday = 7,
};

int main()
{
	//under the task 1
	std::cout << "\t\t\tTask2.1" << std::endl;
	float num1, num2, safePlace;
	double task2;

	std::cout << "\t\tProgram for changing the places of numbers" << std::endl;

	std::cout << "\tInput data:" << std::endl;
	std::cout << "Enter number1: ";
	std::cin >> num1;
	std::cout << "Enter number2: ";
	std::cin >> num2;
	std::cout << std::endl;

	safePlace = num1;
	num1 = num2;
	num2 = safePlace;

	std::cout << "\tOutput data:" << std::endl;
	std::cout << "In place number1 is: " << num1 << std::endl;
	std::cout << "In place number2 is: " << num2 << std::endl;

	//under the task 2
	std::cout << "\t\t\tTask2.2" << std::endl;
	std::cout << "\tInput data:" << std::endl;
	std::cout << "Enter your double value: ";
	std::cin >> task2;

	std::cout << "\t\nOutput data:" << std::endl;
	std::cout << "Double type: " << task2 << std::endl;
	std::cout << "Integer type: " << int(task2) << std::endl;
	std::cout << "Setw and setfill: " << std::setw(20) << std::setfill('$') << std::right << task2 << std::endl;



	//under the task 3
	std::cout << "\t\t\tTask2.3" << std::endl;

	double task3;
	std::cout << "Enter your floating-point number: ";
	std::cin >> task3;

	std::cout << "\nSetprecision = 2:" << std::endl;
	std::cout << std::setprecision(2) << std::fixed << task3 << std::endl;
	std::cout << std::setprecision(2) << std::scientific << task3 << std::endl;

	std::cout << "\nSetprecision = 5:" << std::endl;
	std::cout << std::setprecision(5) << std::fixed << task3 << std::endl;
	std::cout << std::setprecision(5) << std::scientific << task3 << std::endl;

	std::cout << "\nSetprecision = 10:" << std::endl;
	std::cout << std::setprecision(10) << std::fixed << task3 << std::endl;
	std::cout << std::setprecision(10) << std::scientific << task3 << std::endl;

	std::cout << std::setprecision(5) << std::fixed;
	
	//under the task 4
	std::cout << "\t\t\tTask2.4" << std::endl;

	int num_dayOfWeek;
	std::cout << "Enter the day of the week number: ";
	std::cin >> num_dayOfWeek;

	std::cout << "Your entered number of the day is ";
	switch (num_dayOfWeek)
	{
	case 1:
		std::cout << "Monday = " << static_cast<int>(DayOfWeek::Monday);
		break;
	case 2:
		std::cout << "Tuesday = " << static_cast<int>(DayOfWeek::Tuesday);
		break;
	case 3:
		std::cout << "Wednesday = " << static_cast<int>(DayOfWeek::Wednesday);
		break;
	case 4:
		std::cout << "Thursday = " << static_cast<int>(DayOfWeek::Thursday);
		break;
	case 5:
		std::cout << "Friday = " << static_cast<int>(DayOfWeek::Friday);
		break;
	case 6:
		std::cout << "Saturday = " << static_cast<int>(DayOfWeek::Saturday);
		break;
	case 7:
		std::cout << "Sunday = " << static_cast<int>(DayOfWeek::Sunday);
		break;
	}
	std::cout << std::endl;

	//under the task 5
	std::cout << "\t\t\tTask2.5" << std::endl;

	double enterAnyNum;
	bool castedTheNum;
			
	std::cout << "Enter any number = ";
	std::cin >> enterAnyNum;
	castedTheNum = static_cast<bool>(enterAnyNum);
	std::cout << "Your casted boolean number is \"" << std::boolalpha << castedTheNum << "\"" << std::endl;
}