#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string ReadName();
double ReadPrice();

int main(int argc, char** argv)
{

	cout << ReadName() << endl;
	cout << ReadPrice() << endl;

	return 0;
}

string ReadName()
{
	string name = "";

	cout << "Enter your name: ";
	getline(cin, name);

	return name;
}

double ReadPrice()
{
	stringstream stream;
	string input = "";

	double price = 0.0;

	cout << "Enter a price: ";
	getline(cin, input);
	stream.str(input);
	stream >> price;
	stream.clear();

	return (price > 0) ? price : 0;

}