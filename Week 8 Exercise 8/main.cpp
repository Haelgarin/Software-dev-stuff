#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;
	int count;

	string words[1000];
	int numberOfWords = 0;

	cout << "How many words do you wish to enter (between 0 and 1000): ";
	getline(cin, input);
	stream.str(input);
	stream >> numberOfWords;
	stream.clear();

	for (count = 0; count < numberOfWords; count++)
	{
		cout << "Enter word " << count + 1 << ": ";
		getline(cin, words[count]);
	}

	cout << "\r\nThe words you entered were:" << endl;
	for (count = 0; count < numberOfWords; count++)
	{
		cout << words[count] << endl;
	}

	cout << "\r\nThe words you entered in reverse order were:" << endl;
	for (count = numberOfWords; count >= 0; count--)
	{
		cout << words[count] << endl;
	}

	return 0;
}