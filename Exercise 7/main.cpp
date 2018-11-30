#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;



	string employeeId = "";
	string firstName = "";
	string lastName = "";
	string firstLineOfAddress = "";
	string postcode = "";
	string telephoneNumber = "";

	cout << "\r\nEnter the following information: " << endl;

	cout << "\r\nEmployee ID: ";
	getline(cin, employeeId);

	cout << "\r\nFirst Name: ";
	getline(cin, firstName);

	cout << "\r\nLast Name: ";
	getline(cin, lastName);

	cout << "\r\nFirst Line Of Address: ";
	getline(cin, firstLineOfAddress);

	cout << "\r\nPostcode: ";
	getline(cin, postcode);

	cout << "\r\nTelephone Number: ";
	getline(cin, telephoneNumber);

	cout << "===================================================";

	cout << "\r\nEmployee ID: " << employeeId;
	cout << "\r\nFirst Name : " << firstName;
	cout << "\r\nLast Name: " << lastName;
	cout << "\r\nFirst Line Of Address: " << firstLineOfAddress;
	cout << "\r\nPostcode: " << postcode;
	cout << "\r\nTelephone Number: " << telephoneNumber;

	return 0;
}