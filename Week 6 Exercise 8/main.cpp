#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	int guesses = 3;
	int secretNumber = 0;
	int playerTwoGuess = 0;

	cout << "Player one, enter your secret number: ";
	getline(cin, input);
	stream.str(input);
	stream >> secretNumber;
	stream.clear();

	while (guesses > 0)
	{
		cout << "Player two, take a guess: ";
		getline(cin, input);
		stream.str(input);
		stream >> playerTwoGuess;
		stream.clear();

		if (playerTwoGuess == secretNumber)
		{
			cout << "You guessed correctly" << endl;
			break;
		}

		else if (guesses > 1)

		{
			guesses--;
			cout << "Try again, you have " << guesses << " guesses remaining." << endl;
		}

		else

		{
			cout << "Sorry you have run out of guesses" << endl;
			guesses--;
		}


	}


	return 0;
}