#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	double minTempMonthOne = 0.0, maxTempMonthOne = 0.0, minTempMonthTwo = 0.0, maxTempMonthTwo = 0.0;

	cout << "\r\nEnter the minimum and maximum values for 2 months" << endl;

	cout << "Minimum Temperature Month One: ";
	getline(cin, input);
	stream.str(input);
	stream >> minTempMonthOne;
	stream.clear();

	cout << "Maximum Temperature Month One: ";
	getline(cin, input);
	stream.str(input);
	stream >> maxTempMonthOne;
	stream.clear();

	cout << "Minimum Temperature Month Two: ";
	getline(cin, input);
	stream.str(input);
	stream >> minTempMonthTwo;
	stream.clear();

	cout << "Maximum Temperature Month Two: ";
	getline(cin, input);
	stream.str(input);
	stream >> maxTempMonthTwo;
	stream.clear();

	cout << "\r\nMonth 1 range is " << minTempMonthOne << " to " << maxTempMonthOne << endl;
	cout << "Month 2 range is " << minTempMonthTwo << " to " << maxTempMonthTwo << endl;

	if ((maxTempMonthOne > minTempMonthTwo && maxTempMonthOne < maxTempMonthTwo) || (maxTempMonthTwo > minTempMonthOne && maxTempMonthTwo < maxTempMonthOne))
	{
		cout << "Ranges overlap";
	}

	return 0;
}