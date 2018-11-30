#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;
	int count;

	int oddAndEvenArray[5];

	cout << "Enter 5 whole numbers." << endl;

	for (count = 0; count < 5; count++)
	{
		cout << "Enter number " << count + 1 << ": ";
		getline(cin, input);
		stream.str(input);
		stream >> oddAndEvenArray[count];
		stream.clear();
	}

	for (count = 0; count < 5; count++)
	{
		if (oddAndEvenArray[count] % 2 == 0)
		{
			cout << "\r\nEven number '" << oddAndEvenArray[count] << "' found!\r\nEnding search..." << endl;
			break;
		}

		else
		{
			cout << "\r\nEven number not found!\r\nChecking next number..." << endl;
		}
	}

	cout << endl;


	return 0;
}