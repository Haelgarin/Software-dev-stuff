#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	string condition = "no";

	while (condition == "no")
	{
		int multiplier = 0;
		cout << "Enter a number: ";
		getline(cin, input);
		stream.str(input);
		stream >> multiplier;
		stream.clear();

		cout << multiplier << " x 5 = " << multiplier * 5 << endl;

		cout << "Exit? ";
		getline(cin, condition);

	}








	return 0;
}