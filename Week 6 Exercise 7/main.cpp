#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	int count;

	int numToTest = 1000;
	int num1 = 3, num2 = 5, result = 0;

	cout << "\r\nAll multiples of 3 added together" << endl;
	
	for (count = numToTest; count > 0; count--)
	{
		if (count % num1 == 0)
		{
			cout << count << endl;
			result = result + count;
			
		}

		else if (count % num2 == 0)
		{
			cout << count << endl;
			result = result + count;
		}
	}


	cout << "============================================================" << endl;


	cout << "Overall total = " << result << endl;


	return 0;
}