#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void ReadNames(string names[], int maxNames);

int main(int argc, char** argv)
{

	string names[5];

	ReadNames(names, 5);

	cout << names[3];


	return 0;
}

void ReadNames(string names[], int maxNames)
{
	for (int count = 0; count < maxNames; count++)
	{
		cout << "Enter name " << count + 1 << ": ";
		getline(cin, names[count]);
	}

}