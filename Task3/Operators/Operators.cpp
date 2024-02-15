#include <iostream>
#include <iomanip>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	cout << "\t\tTASK 3 \"OPERATORS\"" << endl;

	//UNDER THE TASK1
	cout << "\tUnder the task1" << endl;

	int secInTheGame;
	int hours, minutes, seconds;
	cout << "Let's enter, how much seconds you spent in the game: ";
	cin >> secInTheGame;

	hours = secInTheGame / 3600;
	minutes = secInTheGame % 3600 / 60;
	seconds = secInTheGame % 3600 % 60;
	
	cout << "You spent "; 
	cout << hours << " hours, ";
	cout << minutes << " minutes, ";
	cout << seconds << " seconds.";

	cout << endl;

	//UNDER THE TASK2
	cout << "\tUnder the task2" << endl;
	
	float num1, num2, num3;
	cout << "Enter number1: ";
	cin >> num1;
	cout << "Enter number2: ";
	cin >> num2;
	cout << "Enter number3: ";
	cin >> num3;

	double sum = num1 + num2 + num3;
	double mul = num1 * num2 * num3;
	double aver = (num1 + num2 + num3) / 3;
	bool comparisonNum1Num2 = num1 == num2;
	bool comparisonNum2Num3 = num2 == num3;

	cout << "Summary of numbers is " << sum << endl;
	cout << "Multiply of numbers is " << mul << endl;
	cout << std::boolalpha;
	cout << "Comparison of number1 and number2 is " << comparisonNum1Num2 << endl;
	cout << "Comparison of number2 and number3 is " << comparisonNum2Num3 << endl;


}
