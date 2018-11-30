#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;


	int productConditional = 20;
	cout << "Enter the number of products purchased: ";

	//Read number of products from user
	int purchasedProducts = 0;
	getline(cin, input);
	stream.str(input);
	stream >> purchasedProducts;
	stream.clear();

	//Test if purchasedProducts is greater than productConditional else if less than or equal to 20
	if (purchasedProducts > productConditional)
	{
		cout << "Number of products is greater than " << productConditional << endl;
	}

	else
	{
		cout << "Number of products is less than or equal to " << productConditional << endl;
	}


	return 0;
}