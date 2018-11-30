#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	/*
	int aValue, bValue, cValue, dValue, eValue = 0;

	cout << "\r\nEnter 4 integers when prompted: " << endl;

	cout << "Integer 1: ";
	getline(cin, input);
	stream.str(input);
	stream >> bValue;
	stream.clear();

	cout << "\r\nInteger 2: ";
	getline(cin, input);
	stream.str(input);
	stream >> cValue;
	stream.clear();

	cout << "\r\nInteger 3: ";
	getline(cin, input);
	stream.str(input);
	stream >> dValue;
	stream.clear();

	cout << "\r\nInteger 4: ";
	getline(cin, input);
	stream.str(input);
	stream >> eValue;
	stream.clear();

	cout << "\r\n===========================================" << endl;

	cout << "Input values:" << endl;
	cout << "Integer 1: " << bValue << endl;
	cout << "Integer 2: " << cValue << endl;
	cout << "Integer 3: " << dValue << endl;
	cout << "Integer 4: " << eValue << endl;

	aValue = bValue * cValue + dValue - eValue;

	cout << "\r\nResult = " << aValue;

	*/

	/*

	int aValue, bValue, cValue, dValue, eValue = 0;

	cout << "\r\nEnter 4 integers when prompted: " << endl;

	cout << "Integer 1: ";
	getline(cin, input);
	stream.str(input);
	stream >> bValue;
	stream.clear();

	cout << "\r\nInteger 2: ";
	getline(cin, input);
	stream.str(input);
	stream >> cValue;
	stream.clear();

	cout << "\r\nInteger 3: ";
	getline(cin, input);
	stream.str(input);
	stream >> dValue;
	stream.clear();

	cout << "\r\nInteger 4: ";
	getline(cin, input);
	stream.str(input);
	stream >> eValue;
	stream.clear();

	cout << "\r\n===========================================" << endl;

	cout << "Input values:" << endl;
	cout << "Integer 1: " << bValue << endl;
	cout << "Integer 2: " << cValue << endl;
	cout << "Integer 3: " << dValue << endl;
	cout << "Integer 4: " << eValue << endl;

	aValue = bValue * cValue + dValue * eValue;

	cout << "\r\nResult = " << aValue;
	*/


	int aValue, bValue, cValue, dValue = 0;

	cout << "\r\nEnter 4 integers when prompted: " << endl;

	cout << "Integer 1: ";
	getline(cin, input);
	stream.str(input);
	stream >> bValue;
	stream.clear();

	cout << "\r\nInteger 2: ";
	getline(cin, input);
	stream.str(input);
	stream >> cValue;
	stream.clear();

	cout << "\r\nInteger 3: ";
	getline(cin, input);
	stream.str(input);
	stream >> dValue;
	stream.clear();


	cout << "\r\n===========================================" << endl;

	cout << "Input values:" << endl;
	cout << "Integer 1: " << bValue << endl;
	cout << "Integer 2: " << cValue << endl;
	cout << "Integer 3: " << dValue << endl;

	aValue = bValue * cValue + dValue * bValue;

	cout << "\r\nResult = " << aValue;

	cout << "\r\n===========================================" << endl;
	cout << "\r\n===========================================" << endl;
	cout << "\r\n===========================================" << endl;

	const double pi = 3.14;
	double radious = 0.0;
	double height = 0.0;
	double area = 0.0;

	cout << "\r\nEnter the radious and height of a cylinder: " << endl;

	cout << "Radious: ";
	getline(cin, input);
	stream.str(input);
	stream >> radious;
	stream.clear();

	cout << "\r\nHeight: ";
	getline(cin, input);
	stream.str(input);
	stream >> height;
	stream.clear();

	cout << "\r\n===========================================" << endl;
	cout << "Input values:" << endl;
	cout << "Radious: " << radious << endl;
	cout << "Height: " << height << endl;

	area = 2 * pi * radious * height + 2 * pi * radious * radious;

	cout << "Area = " << area << endl;



	return 0;
}