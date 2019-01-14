#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int DisplayCalculationMenu();
int SelectOption();
void PerformOperation();
double ReadNumber(string prompt);

int main(int argc, char** argv)
{

	PerformOperation();

	return 0;
}

int DisplayCalculationMenu()
{
	
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Exit" << endl;
	
	return SelectOption();
}

int SelectOption()
{
	string input = "";
	stringstream stream;

	int optionNumber = 0;

	cout << "Select option --> ";

	getline(cin, input);
	stream.str(input);
	stream >> optionNumber;
	stream.clear();

	return optionNumber;
}

void PerformOperation()
{
	bool running = true;

	do
	{
		double num1 = 0.0;
		double num2 = 0.0;

		switch (DisplayCalculationMenu())
		{
		case 1:
			num1 = ReadNumber("Enter first number: ");
			num2 = ReadNumber("Enter second number: ");

			cout << "Result is " << num1 + num2 << endl;
			break;
		case 2:
			num1 = ReadNumber("Enter first number: ");
			num2 = ReadNumber("Enter second number: ");

			cout << "Result is " << num1 - num2 << endl;
			break;
		case 3:
			num1 = ReadNumber("Enter first number: ");
			num2 = ReadNumber("Enter second number: ");

			cout << "Result is " << num1 * num2 << endl;
			break;
		case 4:
			num1 = ReadNumber("Enter first number: ");
			num2 = ReadNumber("Enter second number: ");

			if (num1 == 0.0 || num2 == 0.0)
			{
				cout << "Result not defined" << endl;
			}

			else
			{
				cout << "Result is " << num1 / num2 << endl;
			}
			break;
		case 5:
			running = false;
			break;
		default:
			cout << "Input not valid, select from listed options" << endl;
		}
	} while (running);

}

double ReadNumber(string prompt)
{
	string input = "";
	stringstream stream;

	cout << prompt;

	double inputNumber = 0.0;

	getline(cin, input);
	stream.str(input);

	while ((stream >> inputNumber && stream.eof()) == false)
	{
		cout << "Input invalid, enter again: " << endl;
		stream.clear();
		getline(cin, input);
		stream.str(input);
	}

	return inputNumber;
}