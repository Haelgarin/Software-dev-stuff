#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

	//Excercise 1
	int number1, number2, result = 0;

	number1 = 4;
	number2 = 5;
	result = number1 * number2;

	cout << "\r\nResult = " << result << endl;

	cout << "\r\n********************************************" << endl;

	double result2, number3 = 0.0;
	int number4 = 0;

	number3 = 3.14;
	number4 = 5.56;
	result2 = number3 + number4;

	cout << "\r\n2nd result = " << result2 << endl;

	cout << "\r\n********************************************" << endl;

	/*
	int result3 = 0;
	int number5, number6 = 0;

	number5 = 4;
	number6 = 5;
	result3 = number5 + number6;
	cout << str(result3) << endl;
	*/

	cout << "\r\n********************************************" << endl;

	double result4;
	int number7, number8 = 0;

	number7 = 7;
	number8 = 3;
	result4 = (double)number7 / number8;

	cout << "\r\n4th result = " << result4;

	cout << "\r\n********************************************" << endl;

	int price, discountedPrice = 0;
	price = 100;
	int percentage = 10;

	discountedPrice = price - (price * percentage / 100);


	cout << discountedPrice;

	cout << "\r\n********************************************" << endl;

	int count = 0;
	count = count + 1;

	cout << count;

}