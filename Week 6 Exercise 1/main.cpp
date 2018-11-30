#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	int count;

	for (count = 0; count < 5; count++)
	{
		cout << "The count is " << count << endl;
	}

	cout << "==========================================" << endl;

	int maxLoops = 0;
	cout << "\r\nEnter the maximum number of loops: ";

	getline(cin, input);
	stream.str(input);
	stream >> maxLoops;
	stream.clear();

	for (count = 0; count < maxLoops; count++)
	{
		cout << "The count is " << count << endl;
	}

	cout << "==========================================" << endl;

	for (count = 0; count < 6; count++)
	{
		cout << count << " x " << "6 = " << (count * 6) << endl;
	}

	cout << "==========================================" << endl;

	int numberOfAdditions = 0;
	cout << "\r\nEnter the number of additions you want to perform: ";

	getline(cin, input);
	stream.str(input);
	stream >> numberOfAdditions;
	stream.clear();

	for (count = 0; count < numberOfAdditions; count++)
	{
		int num1 = 0, num2 = 0, result = 0;
		cout << "\r\nEnter 2 integers to add together" << endl;

		cout << "Integer 1: ";
		getline(cin, input);
		stream.str(input);
		stream >> num1;
		stream.clear();

		cout << "Integer 2: ";
		getline(cin, input);
		stream.str(input);
		stream >> num2;
		stream.clear();

		result = num1 + num2;

		cout << "The result of " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;

	}


	return 0;
}