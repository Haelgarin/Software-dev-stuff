#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	double price, totalPrice = 0.0;
	int quantity = 0;
	double discount = 0.10;

	cout << "Enter a price and a quantity of the product:" << endl;

	cout << "\r\nPrice: ";
	getline(cin, input);
	stream.str(input);
	stream >> price;
	stream.clear();

	cout << "\r\nQuantity: ";
	getline(cin, input);
	stream.str(input);
	stream >> quantity;
	stream.clear();

	totalPrice = price * quantity;

	if (price > 200 && quantity > 10)
	{
		cout << "Current price before discount is " << totalPrice << endl;
		totalPrice = totalPrice - (totalPrice * discount);
		cout << "The new price is " << totalPrice << endl;
	}

	cout << "\r\n===========================================" << endl;

	double temperature, pressure = 0.0;

	cout << "Enter a temperature and pressure of the boiler:" << endl;

	cout << "\r\nTemperature: ";
	getline(cin, input);
	stream.str(input);
	stream >> temperature;
	stream.clear();

	cout << "\r\nPressure: ";
	getline(cin, input);
	stream.str(input);
	stream >> pressure;
	stream.clear();

	if (temperature > 728 && pressure >= 182)
	{
		cout << "Temperature is over 728 degrees" << endl;
		cout << "Pressure too high for current temperature" << endl;
	}
	else
	{
		cout << "All OK";
	}

	cout << "\r\n===========================================" << endl;

	string title, category, publisher = "";

	cout << "Enter the title, category and publisher of a book:" << endl;

	cout << "\r\nTitle: ";
	getline(cin, title);

	cout << "\r\nCategory: ";
	getline(cin, category);

	cout << "\r\nPublisher: ";
	getline(cin, publisher);

	if (publisher == "O'Reilly" || publisher == "Quercus")
	{
		cout << "We don't sell books by these publishers" << endl;
	}

	else if (category == "Fiction")
	{
		cout << "We don't sell this type of book" << endl;
	}

	cout << "\r\n===========================================" << endl;


	return 0;
}