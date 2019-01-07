#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void DisplayNumber();
void DisplaySquareOfNumberEntered();
void DisplayCountdown();
void DisplayCalculatedSum();
int ReadIntegerInput();

int main(int argc, char** argv)
{

	DisplayNumber();
	DisplaySquareOfNumberEntered();
	DisplayCountdown();
	DisplayCalculatedSum();

	return 0;
}

void DisplayNumber()
{
	int number = 3;
	cout << number << endl;
}

void DisplaySquareOfNumberEntered()
{
	string input = "";
	stringstream stream;

	int number = 0;

	cout << "Enter a number to be squared: ";
	getline(cin, input);
	stream.str(input);
	stream >> number;
	stream.clear();

	cout << number << " squared = " << number * number << endl;
}

void DisplayCountdown()
{
	int count;

	for (count = 9; count > -1; count--)
	{
		cout << count << endl;
	}
}

void DisplayCalculatedSum()
{
	int count;
	int runningSum = 0;

	for (count = 0; count < 3; count++)
	{
		cout << "enter Integer " << count + 1 << ": ";
		runningSum += ReadIntegerInput();
		cout << runningSum << endl;
	}
}

int ReadIntegerInput()
{
	string input = "";
	stringstream stream;

	int number = 0;

	getline(cin, input);
	stream.str(input);
	stream >> number;
	stream.clear();

	return number;
}