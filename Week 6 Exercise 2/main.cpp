#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	int count;

	for (count = 10; count > -1; count--)
	{
		cout << count << " green bottles" << endl;
	}

	cout << "===============================================" << endl;

	for (count = 56; count < 59; count++)
	{
		cout << "Count: " << count << endl;
	}

	cout << "===============================================" << endl;

	int num1 = 34, num2 = 22;

	for (count = 0; count < 3; count++)
	{
		cout << "Numbers are " << num1 << " " << num2 << endl;
		num1 = num1 - 10;
		num2 = num2 + 10;
	}

	cout << "===============================================" << endl;

	double price = 28.0;
	double percentage = 0.0;
	double total = 0.0;

	for (count = 5; count < 12; count++)
	{
		percentage = static_cast<double>(count) / 100;
		total = price * percentage;

		cout << "Your savings on " << price << " at " << count << "% would be " << total << endl;
	}








	return 0;
}