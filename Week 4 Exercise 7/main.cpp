#include <iostream>
#include <sstream>
#include <string>
#include <limits>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	int currentLargest = 0;
	int currentSmallest = numeric_limits<int>::max();
	int tempValue = 0;

	cout << "\r\nEnter 4 whole numbers: " << endl;

	cout << "\r\nNum 1:";
	getline(cin, input);
	stream.str(input);
	stream >> currentLargest;
	stream >> currentSmallest;
	stream.clear();

	cout << "\r\nNum 2:";
	getline(cin, input);
	stream.str(input);
	stream >> tempValue;
	stream.clear();

	if (tempValue > currentLargest)
	{
		currentLargest = tempValue;
	}

	if (tempValue < currentSmallest)
	{
		currentSmallest = tempValue;
	}

	cout << "\r\nNum 3:";
	getline(cin, input);
	stream.str(input);
	stream >> tempValue;
	stream.clear();

	if (tempValue > currentLargest)
	{
		currentLargest = tempValue;
	}

	if (tempValue < currentSmallest)
	{
		currentSmallest = tempValue;
	}

	cout << "\r\nNum 4:";
	getline(cin, input);
	stream.str(input);
	stream >> tempValue;
	stream.clear();

	if (tempValue > currentLargest)
	{
		currentLargest = tempValue;
	}

	if (tempValue < currentSmallest)
	{
		currentSmallest = tempValue;
	}

	cout << "The largest number is " << currentLargest << ", and the smallest number is " << currentSmallest << endl;



	return 0;
}