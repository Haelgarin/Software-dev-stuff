#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	int userValues[2];

	cout << "Enter 2 integers" << endl;

	cout << "Integer 1: ";
	getline(cin, input);
	stream.str(input);
	stream >> userValues[0];
	stream.clear();

	cout << "Integer 2: ";
	getline(cin, input);
	stream.str(input);
	stream >> userValues[1];
	stream.clear();

	cout << "\r\nInteger 1 is: " << userValues[0] << ", and Integer 2 is: " << userValues[1] << endl;

	int tempInteger = userValues[0];
	userValues[0] = userValues[1];
	userValues[1] = tempInteger;

	cout << "\r\nInteger 1 is now: " << userValues[0] << ", and Integer 2 is now: " << userValues[1] << endl;

	cout << "\r\n===========================================================" << endl;

	string numList[3];

	numList[0] = "One";
	numList[1] = "Two";
	numList[2] = "Three";

	cout << numList[0] << " " << numList[1] << " " << numList[2] << endl;

	string tempString = "";

	tempString = numList[0];
	numList[0] = numList[2];
	numList[2] = tempString;

	cout << numList[0] << " " << numList[1] << " " << numList[2] << endl;

	return 0;
}