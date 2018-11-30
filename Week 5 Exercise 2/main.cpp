#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	int studentsThatEntered = 0;
	int studentsThatLeft = 0;
	string alarmResponse = "";

	cout << "How many students have entered the building: ";
	getline(cin, input);
	stream.str(input);
	stream >> studentsThatEntered;
	stream.clear();

	cout << "How many students have left the building: ";
	getline(cin, input);
	stream.str(input);
	stream >> studentsThatLeft;
	stream.clear();

	cout << "Should the alarm be armed, 'yes' or 'no': ";
	getline(cin, alarmResponse);

	if (alarmResponse == "yes")
	{
		if (studentsThatLeft < studentsThatEntered)
		{
			cout << "Students left in the building";
		}
		else
		{
			cout << "Building is empty";
		}
	}
	else
	{
		cout << "Alarm not armed";
	}


	return 0;
}