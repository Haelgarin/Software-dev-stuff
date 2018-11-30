#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	string input = "";
	stringstream stream;



	double temperature = 0.0, pressure = 0.0, updatedPressure = 0.0, temperatureChange = 0.0;
	const double temperatureConditional = 1234.0;
	cout << "Enter an initial temperature and pressure for the reactor." << endl;

	cout << "Temperature: ";
	getline(cin, input);
	stream.str(input);
	stream >> temperature;
	stream.clear();

	cout << "Pressure: ";
	getline(cin, input);
	stream.str(input);
	stream >> pressure;
	stream.clear();

	cout << "====================================================================" << endl;
	cout << "\r\nThe pressure is " << pressure << ", and the temperature is " << temperature << endl;

	while (temperature < temperatureConditional)
	{
		cout << "Enter the current pressure for the reactor." << endl;

		cout << "Pressure: ";
		getline(cin, input);
		stream.str(input);
		stream >> updatedPressure;
		stream.clear();

		temperatureChange = (updatedPressure - pressure) * 5;
		temperature = temperature + temperatureChange;

		cout << "\r\n====================================================================" << endl;
		cout << "\r\nThe new pressure is " << pressure << ", and the new temperature is " << temperature << endl;
	}

	cout << "!!!The temperature has exceeded " << temperatureConditional << ", shutting down reactor!!!" << endl;


	return 0;
}