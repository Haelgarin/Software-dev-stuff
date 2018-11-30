#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char argv)
{

	string input = "";
	stringstream stream;
	int count;

	double valuesToMultiply[5];

	valuesToMultiply[0] = 0.234;
	valuesToMultiply[1] = 0.999;
	valuesToMultiply[2] = 1.999;
	valuesToMultiply[3] = 28.899;
	valuesToMultiply[4] = -0.8372;

	double multiplier = 0.0;

	cout << "Enter a multiplier: ";
	getline(cin, input);
	stream.str(input);
	stream >> multiplier;
	stream.clear();

	for (count = 0; count < 5; count++)
	{
		cout << multiplier << " * " << valuesToMultiply[count] << " = "
			<< multiplier * valuesToMultiply[count] << endl;
	}


	return 0;
}