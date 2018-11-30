#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	cout << "\r\nEnter a number: ";

	//Read number from user
	int enteredNumber = 0;
	getline(cin, input);
	stream.str(input);
	stream >> enteredNumber;
	stream.clear();

	if (enteredNumber >= 0)
	{
		if (enteredNumber > 10)
		{
			cout << "The entered number exceeds 10" << endl;
		}

		else if (enteredNumber == 5)
		{
			cout << "The number matches 5" << endl;
		}
	}

	else
	{
		cout << "\r\nThe number entered is negative" << endl;
	}

	return 0;
}