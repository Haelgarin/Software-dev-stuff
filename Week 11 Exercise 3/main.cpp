#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void DisplayNumber(int number);
void DisplayDivisionResult(double num1, double num2);
void DisplayCountdown(int startValue);
void ReadNumber(string prompt);

int main(int argc, char** argv)
{

	DisplayNumber(42);
	DisplayDivisionResult(2.0, 0.0);
	DisplayCountdown(10);
	ReadNumber("Enter an integer -> ");

	cout << endl;
	return 0;
}

void DisplayNumber(int number)
{
	cout << "The number is " << number << endl;

}

void DisplayDivisionResult(double num1, double num2)
{
	if (num1 == 0.0 || num2 == 0.0)
	{
		cout << "Result not defined" << endl;
	}

	else
	{
		cout << num1 / num2 << endl;
	}

}

void DisplayCountdown(int startValue)
{
	for (int count = startValue; count > 0; count--) 
	{
		cout << count << endl;
	}
	
}

void ReadNumber(string prompt)
{
	stringstream stream;
	string input = "";

	int userInput = 0;

	cout << prompt;
	getline(cin, input);
	stream.str(input);
	stream >> userInput;
	stream.clear();

	cout << "You entered " << userInput << endl;

}