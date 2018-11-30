#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{


	string input = "";
	stringstream stream;

	double initialInvestment, interestRatePercentage, interestRateDecimal, calculatedValue = 0.0;
	int yearsInvested;


	cout << "\r\nEnter the following values to calculate your simple interest" << endl;

	cout << "Initial invested ammount: ";
	getline(cin, input);
	stream.str(input);
	stream >> initialInvestment;
	stream.clear();

	cout << "\r\nInterest rate percentage: ";
	getline(cin, input);
	stream.str(input);
	stream >> interestRatePercentage;
	stream.clear();
	interestRatePercentage;
	interestRateDecimal = interestRatePercentage / 100;

	cout << "\r\nNumber of years of investment: ";
	getline(cin, input);
	stream.str(input);
	stream >> yearsInvested;
	stream.clear();

	calculatedValue = ((interestRateDecimal * initialInvestment) * (yearsInvested)) + initialInvestment;

	cout << "Your total savings are now : " << calculatedValue << endl;


	return 0;
}