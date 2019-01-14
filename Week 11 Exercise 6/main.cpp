#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int ReadSingleDigit();

int main(int argc, char** argv)
{

	cout << ReadSingleDigit();

	return 0;
}

int ReadSingleDigit()
{
	stringstream stream;
	string input = "";

	int digit = 0;

	do
	{
		cout << "Enter a single digit: ";
		getline(cin, input);
		stream.str(input);
		stream >> digit;
		stream.clear();
	} while (digit > 9 || digit < -9);

	return digit;

}