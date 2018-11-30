#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	double length1, length2;

	cout << "\r\nEnter 2 length values" << endl;

	cout << "\r\nLength 1: ";
	getline(cin, input);
	stream.str(input);
	stream >> length1;
	stream.clear();

	cout << "\r\nLength 2: ";
	getline(cin, input);
	stream.str(input);
	stream >> length2;
	stream.clear();

	double innerSquare = (length2 * length2);
	double outerTriangles = 4 * ((length1 * length2) / 2);

	double totalArea = innerSquare + outerTriangles;

	cout << "\r\nThe shapes area = " << totalArea << endl;

	return 0;
}