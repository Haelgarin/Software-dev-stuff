#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int AddNumbers(int num1, int num2);
int ConvertToNumber(string numberText);
double AreaOfParallelogram(double base, double height);

int main(int argc, char** argv)
{

	int firstResult = AddNumbers(40, 2);
	cout << firstResult << endl;

	int secondResult = ConvertToNumber("21");
	cout << firstResult + secondResult << endl;

	double area = AreaOfParallelogram(4.5, 6.7);
	cout << area << endl;


	cout << endl;
	return 0;
}

int AddNumbers(int num1, int num2)
{
	return num1 + num2;
}

int ConvertToNumber(string numberText)
{
	stringstream stream;
	int returnValue = 0;

	stream.str(numberText);
	stream >> returnValue;
	stream.clear();

	return returnValue;
}

double AreaOfParallelogram(double base, double height)
{
	return base * height;
}