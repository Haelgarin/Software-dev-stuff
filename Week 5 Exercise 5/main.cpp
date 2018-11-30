#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;


	double temperature = 0.0, pressure = 0.0;

	cout << "\r\nEnter a temperature and a pressure" << endl;

	cout << "Temperature:";
	getline(cin, input);
	stream.str(input);
	stream >> temperature;
	stream.clear();

	cout << "Pressure:";
	getline(cin, input);
	stream.str(input);
	stream >> pressure;
	stream.clear();

	if (temperature > 983)
	{
		if (pressure >= 129)
		{
			if (pressure >= 172)
			{
				cout << "Warning. Pressure is too high" << endl;
			}

			else
			{
				cout << "Alert. Pressure is very high" << endl;
			}
		}
	}

	else if (temperature >= 300)
	{
		if (pressure > 182)
		{
			if (pressure > 239)
			{
				cout << "Pressure too high" << endl;
			}

			else
			{
				cout << "Warning, pressure is rising too high" << endl;
			}
		}
	}

	else if (temperature < 100)
	{
		if (temperature < 87)
		{
			if (pressure < 85)
			{
				if (pressure < 43)
				{
					cout << "Unsafe pressure" << endl;
				}

				else
				{
					cout << "Pressure too low" << endl;
				}
			}
		}

		else
		{
			if (pressure < 56)
			{
				if (pressure <= 23)
				{
					cout << "Alarm! Pressure is too low" << endl;
				}

				else
				{
					cout << "Warning. Pressure too low" << endl;
				}
			}
		}
	}


	return 0;
}

