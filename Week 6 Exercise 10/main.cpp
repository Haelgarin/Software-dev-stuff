#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	int variableA;
	int variableB;
	double result = 0;

	for (variableA = 0; variableA < 22; variableA++)
	{

		for (variableB = 1; variableB < 14; variableB++)
		{

			result = (5 * variableA) + (2 * static_cast<double>(variableB)) + (4 / static_cast<double>(variableB));

			cout << result << endl;
		}

	}



	return 0;
}