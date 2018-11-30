#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;
	int count;
	int tempNum;

	int numArray[6];

	for (count = 0; count < 6; count++)
	{
		cout << "\r\nEnter integer " << count + 1 << ": ";
		getline(cin, input);
		stream.str(input);
		stream >> numArray[count];
		stream.clear();

		cout << "You entered: " << numArray[count] << endl;
	}

	tempNum = numArray[0];
	numArray[0] = numArray[5];
	numArray[5] = tempNum;

	tempNum = numArray[1];
	numArray[1] = numArray[4];
	numArray[4] = tempNum;

	tempNum = numArray[2];
	numArray[2] = numArray[3];
	numArray[3] = tempNum;



	for (count = 0; count < 6; count++)
	{
		cout << "\r\nThe value at position " << count + 1 << " is now " << numArray[count] << endl;
	}


	return 0;
}