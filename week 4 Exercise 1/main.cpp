#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	double testPrice = 302.20;
	cout << "\r\nEnter a price: ";

	//Read the price from the user
	double price = 0.0;
	getline(cin, input);
	stream.str(input);
	stream >> price;
	stream.clear();

	//Test if price is greater than testPrice
	if (price > testPrice)
	{
		cout << "\r\nPrice is greater than " << testPrice << endl;
	}

	cout << "\r\n============================================" << endl;

	int penConditional = 20;
	cout << "\r\nEnter the number of pens you have: ";

	//Read number of pens from user
	int numberOfPens = 0;
	getline(cin, input);
	stream.str(input);
	stream >> numberOfPens;
	stream.clear();

	//Test if number numberOfPens is less than 20
	if (numberOfPens < penConditional)
	{
		cout << "\r\nNumber of pens is less than " << penConditional << endl;
	}

	cout << "\r\n============================================" << endl;

	cout << "\r\nEnter the minimum allowed area for squares: ";

	//Read minimumArea from user
	double minimumArea = 0.0;
	getline(cin, input);
	stream.str(input);
	stream >> minimumArea;
	stream.clear();

	cout << "\r\nEnter the side length of a square: ";

	//Read length from user
	double squareSideLength = 0.0;
	getline(cin, input);
	stream.str(input);
	stream >> squareSideLength;
	stream.clear();

	//Test if square area is less than the minimum area
	if ((squareSideLength * squareSideLength) < minimumArea)
	{
		cout << "\r\nSquare area is less than " << minimumArea << endl;
	}



	return 0;
}