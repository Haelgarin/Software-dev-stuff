#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;



	string carDescription = "";
	double totalCost = 0.0;
	double discount = 0.0;
	double length = 0.0;
	int completedTasks = 0;

	cout << "\r\nEnter the following information: " << endl;

	cout << "\r\nDescription: ";
	getline(cin, carDescription);

	cout << "\r\nTotal cost (pound stirling): ";
	getline(cin, input);
	stream.str(input);
	stream >> totalCost;
	stream.clear();

	cout << "\r\nDiscount: ";
	getline(cin, input);
	stream.str(input);
	stream >> discount;
	stream.clear();

	cout << "\r\nLength (meters): ";
	getline(cin, input);
	stream.str(input);
	stream >> length;
	stream.clear();

	cout << "\r\nNumber of completed tasks: ";
	getline(cin, input);
	stream.str(input);
	stream >> completedTasks;
	stream.clear();

	cout << "===================================================";

	cout << "\r\nDescription: " << carDescription << endl;
	cout << "Total cost: " << totalCost << " Pounds" << endl;
	cout << "Discount: " << discount << "%" << endl;
	cout << "Length: " << length << " Meters" << endl;
	cout << "Number of completed tasks: " << completedTasks << endl;
	


	return 0;
}