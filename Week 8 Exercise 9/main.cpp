#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;
	int count;

	const int wordLimit = 5;
	int playerScore = 0;
	string playerGuess = "";

	string wordStore[5];

	cout << "\r\nPlayer 1, enter " << wordLimit << " words:" << endl;

	for (count = 0; count < wordLimit; count++)
	{
		cout << "Word " << count + 1 << ": ";
		getline(cin, wordStore[count]);
	}

	cout << "\r\n==========================================================" << endl;

	cout << "\r\nPlayer 2, guess what words have been entered:" << endl;

	for (count = 0; count < wordLimit; count++)
	{
		cout << "Guess word number " << count + 1 << ": ";
		getline(cin, playerGuess);

		if (wordStore[count] == playerGuess)
		{
			playerScore += 1;
			cout << "Word found" << endl;
		}

		else
		{
			cout << "Word not found" << endl;
		}
	}

	cout << "\r\n==========================================================" << endl;

	cout << "\r\nPlayer 2, you guessed " << playerScore << " words correctly" << endl;

	return 0;
}