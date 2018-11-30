#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;
	int count;

	int numberArray[5];
	string wordArray[10];
	double priceArray[7];
	double totalPrice = 0.0;

	for (count = 0; count < 5; count++)
	{
		cout << "Enter integer " << count + 1 << ": ";
		getline(cin, input);
		stream.str(input);
		stream >> numberArray[count];
		stream.clear();
	}

	cout << "==================================================" << endl;

	for (count = 0; count < 5; count++)
	{
		cout << "\r\nInteger " << count + 1 << " = " << numberArray[count] << endl;
	}

	cout << "\r\n==================================================" << endl;



	for (count = 0; count < 10; count++)
	{
		cout << "Enter word " << count + 1 << ": ";
		getline(cin, input);
		stream.str(input);
		stream >> wordArray[count];
		stream.clear();
	}

	cout << "==================================================" << endl;

	for (count = 0; count < 10; count++)
	{
		cout << "\r\nWord " << count + 1 << " is " << wordArray[count] << endl;
	}

	cout << "\r\n==================================================" << endl;



	for (count = 0; count < 7; count++)
	{
		cout << "Enter price " << count + 1 << ": ";
		getline(cin, input);
		stream.str(input);
		stream >> priceArray[count];
		stream.clear();
	}

	cout << "==================================================" << endl;

	for (count = 0; count < 7; count++)
	{
		totalPrice += priceArray[count];
		cout << "\r\Price " << count + 1 << " = " << priceArray[count] << endl;
	}

	cout << "The total price = " << totalPrice << endl;

	return 0;
}