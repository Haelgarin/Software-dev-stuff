#include <iostream>
#include <sstream>
#include <string>

using namespace std;

double ReadNumber(string prompt);
bool InRange(double number);

int main(int argc, char** argv)
{

	double number = ReadNumber("Enter number: ");
	while (InRange(number) == false)
	{
		number = ReadNumber("Enter number in range 20 to 50: ");
	}

	return 0;
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

bool InRange(double number)
{
	if (number >= 20 && number <= 50)
	{
		return true;
	}

	else
	{
		return false;
	}
}