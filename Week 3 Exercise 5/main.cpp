#include <iostream>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;

int main(int argc, char** argv)

{

	string input = "";
	stringstream stream;

	double initialInvestment, interestRatePercentage, interestRateDecimal,
		calculatedTotal, calculatedInterest = 0.0;
	int yearsInvested;


	cout << "\r\nEnter the following values to calculate your compound interest" << endl;

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

	double powerCalculation = pow((1 + interestRateDecimal), yearsInvested);
	calculatedTotal = initialInvestment * powerCalculation;
	calculatedInterest = calculatedTotal - initialInvestment;

	cout << "Your " << initialInvestment << " has accumulated " << calculatedInterest <<
		" over " << yearsInvested << "years " << endl;


	return 0;
}