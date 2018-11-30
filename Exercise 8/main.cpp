#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	double firstNumber = 0.0;
	double secondNumber = 0.0;
	double result = 0.0;

	cout << "\r\nInput two numbers:" << endl;

	cout << "\r\nFirst Number : ";
	getline(cin, input);
	stream.str(input);
	stream >> firstNumber;
	stream.clear();

	cout << "\r\nSecond Number: ";
	getline(cin, input);
	stream.str(input);
	stream >> secondNumber;
	stream.clear();

	cout << "===================================================";

	result = 10 * firstNumber + 5 * secondNumber + (3 * firstNumber * secondNumber);

	cout << "\r\nResult: " << result;

	return 0;
}