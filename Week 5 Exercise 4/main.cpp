#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;


	
	double temperature = 0.0;
	const double lowerTemp = 20.4, upperTemp = 30.9;

	cout << "Enter a temperature between " << lowerTemp << " and " << upperTemp << ": ";
	getline(cin, input);
	stream.str(input);
	stream >> temperature;
	stream.clear();

	if (temperature >= lowerTemp && temperature <= upperTemp)
	{
		cout << "The temperature is within the range " << lowerTemp << " to " << upperTemp << endl;
	}

	int dogCount = 0;
	const int lowerDogBounds = 67, upperDogBounds = 83;

	cout << "\r\nEnter the number of dogs: ";
	getline(cin, input);
	stream.str(input);
	stream >> dogCount;
	stream.clear();

	if (dogCount >= lowerDogBounds && dogCount <= upperDogBounds)
	{
		cout << "The number of dogs has reached at least " << lowerDogBounds << " and has not exceeded " << upperDogBounds << endl;
	}

	double speed = 0.0;
	const double lowerSpeed = 30.0, upperSpeed = 60.0;

	cout << "\r\nEnter a speed: ";
	getline(cin, input);
	stream.str(input);
	stream >> speed;
	stream.clear();

	if (speed == lowerSpeed || speed == upperSpeed)
	{
		cout << "The speed is " << speed << endl;
	}

	int fivePences = 0, onePences = 0, fivePenceValue = 0;
	
	cout << "Enter a quantity of one pence coins, and a quantity of five pence coins" << endl;


	cout << "One pences: ";
	getline(cin, input);
	stream.str(input);
	stream >> onePences;
	stream.clear();

	cout << "Five pences: ";
	getline(cin, input);
	stream.str(input);
	stream >> fivePences;
	stream.clear();

	fivePenceValue = fivePences * 5;
	

	if (onePences == 73 && (onePences - fivePenceValue > 20 || fivePences - onePences > 20))
	{
		cout << "The value of the one pence coins is 73, and the difference in values exceeds 20" << endl;
	}

	else if (onePences < fivePenceValue && (onePences + fivePenceValue == 189))
	{
		cout << "The value of the one pences is lower than the value of the five pences and the total is 189" << endl;
	}

	else if (onePences > 100 || fivePenceValue > 200)
	{
		cout << "Either the one pence value exceeds 100 or the five pence value exceeds 200";
	}


	return 0;
}