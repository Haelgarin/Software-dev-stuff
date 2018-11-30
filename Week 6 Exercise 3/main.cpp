#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	int count;

	int multiplier = 0, multiplicand = 0;

	cout << "Enter a multiplier and multiplicand at which to stop" << endl;

	cout << "Multiplier: ";
	getline(cin, input);
	stream.str(input);
	stream >> multiplier;
	stream.clear();

	cout << "Multiplicand: ";
	getline(cin, input);
	stream.str(input);
	stream >> multiplicand;
	stream.clear();

	for (count = 1; count < multiplicand + 1; count++)
	{
		cout << count << " x " << multiplier << " = " << count * multiplier << endl;
	}


	return 0;
}