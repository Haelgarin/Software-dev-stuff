#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	double prices = 0.0;
	double result = 0.0;

	cout << "\r\nEnter the prices of the four products: ";
	
	cout << "\r\nProduct 1: ";
	getline(cin, input);
	stream.str(input);
	stream >> prices;
	stream.clear();
	result = result + prices;

	cout << "\r\nProduct 2: ";
	getline(cin, input);
	stream.str(input);
	stream >> prices;
	stream.clear();
	result = result + prices;

	cout << "\r\nProduct 3: ";
	getline(cin, input);
	stream.str(input);
	stream >> prices;
	stream.clear();
	result = result + prices;

	cout << "\r\nProduct 4: ";
	getline(cin, input);
	stream.str(input);
	stream >> prices;
	stream.clear();
	result = result + prices;

	cout << "\r\n===================================================";

	cout << "\r\nResult: " << result;

	return 0;
}