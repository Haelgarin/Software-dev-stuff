#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;
	int count;

	const int numberLimit = 8;
	int playerOneNumbers[numberLimit];

	int playerTwoGuess = 0;

	cout << "Player 1, enter " << numberLimit << " whole numbers as prompted." << endl;

	for (count = 0; count < numberLimit; count++)
	{
		cout << "Number " << count + 1 << ": ";
		getline(cin, input);
		stream.str(input);
		stream >> playerOneNumbers[count];
		stream.clear();
	}

	cout << "\r\n==========================================" << endl;

	cout << "\r\nPlayer 2, make a guess: ";
	getline(cin, input);
	stream.str(input);
	stream >> playerTwoGuess;
	stream.clear();

	bool playerTwoWin = false;

	for (count = 0; count < numberLimit; count++)
	{
		if (playerTwoGuess == playerOneNumbers[count])
		{
			playerTwoWin = true;
		}

	}

	if (playerTwoWin)
	{
		cout << "\r\nPlayer 2, you have won" << endl;
	}

	else
	{
		cout << "\r\nPlayer 2, you have lost" << endl;
	}


	cout << endl;

	return 0;
}