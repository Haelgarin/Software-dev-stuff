#include <iostream>
#include <sstream>
#include <string>
#include <time.h>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;

	time_t t;
	int rndNumber;

	srand((unsigned)time(&t));

	

	int lives = 3;
	int score = 0;

	while (lives > 0)
	{

		int tempNum1 = 0, tempNum2 = 0, answer = 0;

		tempNum1 = rndNumber = (rand() % 5);
		tempNum2 = rndNumber = (rand() % 5);

		cout << "\r\n" << tempNum1 << " + " << tempNum2 << " = ";
		getline(cin, input);
		stream.str(input);
		stream >> answer;
		stream.clear();

		if (answer == (tempNum1 + tempNum2))
		{
			cout << "\r\nThat's correct!" << endl;
			score++;
		}

		else
		{
			cout << "\r\nSorry that was wrong." << endl;
			lives--;

			cout << "You have " << lives << " lives remaining." << endl;
		}


		
	}
	cout << "\r\n=================================================================";
	cout << "\r\nYou've run out of lives, your final score is: " << score << endl;


	return 0;
}