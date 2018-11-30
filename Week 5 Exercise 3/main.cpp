#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	string farmer = "";

	cout << "\r\nEnter the name of the farmer: ";
	getline(cin, farmer);

	if (farmer == "Bob")
	{
		int sheepOwned = 0;
		int sheepSold = 0;
		int sheepBought = 0;
		string boughtOrSold = "";
		cout << "\r\nHow many sheep does " << farmer << " currently own: ";
		getline(cin, input);
		stream.str(input);
		stream >> sheepOwned;
		stream.clear();

		cout << "\r\nDo you want to update the sheep 'sold', or sheep 'bought' recently: ";
		getline(cin, boughtOrSold);

		if (boughtOrSold == "sold")
		{
			cout << "\r\nHow many sheep have been sold recently: ";
			getline(cin, input);
			stream.str(input);
			stream >> sheepSold;
			stream.clear();

			cout << "Farmer " << farmer << " owns " << sheepOwned << " sheep and has recently sold " << sheepSold << " sheep" << endl;
		}

		else
		{
			cout << "\r\nHow many sheep have been bought recently: ";
			getline(cin, input);
			stream.str(input);
			stream >> sheepBought;
			stream.clear();

			cout << "Farmer " << farmer << " owns " << sheepOwned << " sheep and has recently bought " << sheepBought << " sheep" << endl;
		}
	}

	else
	{
		int cowsOwned = 0;
		int cowsSold = 0;
		int cowsBought = 0;
		string boughtOrSold = "";
		cout << "\r\nHow many cows does " << farmer << " currently own: ";
		getline(cin, input);
		stream.str(input);
		stream >> cowsOwned;
		stream.clear();

		cout << "\r\nDo you want to update the cows 'sold', or cows 'bought' recently: ";
		getline(cin, boughtOrSold);

		if (boughtOrSold == "sold")
		{
			cout << "\r\nHow many cows have been sold recently: ";
			getline(cin, input);
			stream.str(input);
			stream >> cowsSold;
			stream.clear();

			cout << "Farmer " << farmer << " owns " << cowsOwned << " cows and has recently sold " << cowsSold << " cows" << endl;
		}

		else
		{
			cout << "\r\nHow many cows have been bought recently: ";
			getline(cin, input);
			stream.str(input);
			stream >> cowsBought;
			stream.clear();

			cout << "Farmer " << farmer << " owns " << cowsOwned << " cows and has recently bought " << cowsBought << " cows" << endl;
		}

		

	}

	cout << "\r\nEnter a farm type 'arable' or 'dairy': ";
	string farmType = "";
	getline(cin, farmType);

	if (farmType == "arable")
	{
		double fieldSize = 0.0, profitPerSquareMeter = 0.0, totalProfit = 0.0;

		cout << "Enter your field size and average profit per square meter" << endl;

		cout << "Field Size: ";
		getline(cin, input);
		stream.str(input);
		stream >> fieldSize;
		stream.clear();

		cout << "Profit per Square Meter: ";
		getline(cin, input);
		stream.str(input);
		stream >> profitPerSquareMeter;
		stream.clear();

		totalProfit = fieldSize * profitPerSquareMeter;

		if (fieldSize > 0 && profitPerSquareMeter > 0)
		{
			cout << "Your estimated profit is " << totalProfit;
		}

		else
		{
			cout << "One of the entered values was negative, stopping calculation ...";
		}

	}

	else
	{
		int cowsOwned = 0;
		double milkPerCow = 0.0, profitPerLitre = 0.0, totalProfit = 0.0;

		cout << "Enter how many cows you own, average milk yield per cow, and profit per litre" << endl;

		cout << "Cows Owned: ";
		getline(cin, input);
		stream.str(input);
		stream >> cowsOwned;
		stream.clear();

		cout << "Milk yield: ";
		getline(cin, input);
		stream.str(input);
		stream >> milkPerCow;
		stream.clear();

		cout << "Profit per Litre: ";
		getline(cin, input);
		stream.str(input);
		stream >> profitPerLitre;
		stream.clear();

		totalProfit = (cowsOwned * milkPerCow) * profitPerLitre;

		if (cowsOwned > 0 && milkPerCow > 0 && profitPerLitre > 0)
		{
			cout << "Your estimated profit is " << totalProfit;
		}

		else
		{
			cout << "One of the entered values was negative, stopping calculation ...";
		}


	}






	return 0;
}