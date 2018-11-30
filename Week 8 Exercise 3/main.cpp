#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;
	int count;

	double cost[3];
	double totalCost = 0.0;

	cout << "\r\nEnter 3 prices as prompted" << endl;

	for (count = 0; count < 3; count++)
	{
		cout << "Price " << count + 1 << ": ";

		getline(cin, input);
		stream.str(input);
		stream >> cost[count];
		stream.clear();

		totalCost += cost[count];
	}

	cout << "Your total cost is: " << totalCost << endl;

	cout << "\r\n==================================================" << endl;

	int numOfPlants[5];
	int totalPlants = 0;

	cout << "\r\nEnter 5 quantities of plants as prompted" << endl;

	for (count = 0; count < 5; count++)
	{
		cout << "Plant " << count + 1 << ": ";

		getline(cin, input);
		stream.str(input);
		stream >> numOfPlants[count];
		stream.clear();

		totalPlants += numOfPlants[count];
	}

	cout << "The total number of plants is: " << totalPlants << endl;


	return 0;
}