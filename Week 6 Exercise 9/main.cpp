#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	int width;
	int height;
	int area = 0;

	for (width = 7; width < 960;)
	{

		for (height = 0; height < 960; height++)
		{

			area = (width + 1) * (height + 1);
			cout << (width + 1) << " * " << (height + 1) << " = " << area << endl;

			width++;

			if (area >= 960)
			{
				break;
			}
		}

		if (area >= 960)
		{
			break;
		}

	}






	return 0;
}