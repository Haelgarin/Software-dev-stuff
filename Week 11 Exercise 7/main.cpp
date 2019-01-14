#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int AddThreeNumbers(int num1, int num2, int num3);
double Divide(double num1, double num2);
double CalcDiscountPrice(double price, double percentage);
bool AreEqual(int num1, int num2);
bool IsInRange(double num);
bool CheckNumbers(int numArray[], int arraySize, int numToCheck);

int main(int argc, char** argv)
{

	/*
	int addedNumbers = AddThreeNumbers(1, 2, 3);
	cout << addedNumbers << endl;

	double dividedNumbers = Divide(4, -7);
	cout << dividedNumbers << endl;

	double calculatedDiscount = CalcDiscountPrice(20, 5.2);
	cout << calculatedDiscount << endl;

	bool numberEquality = AreEqual(4, 4);
	cout << numberEquality << endl;
	*/

	bool rangeCheck = IsInRange(3.14);
	cout << rangeCheck << endl;;

	int testArray[5] = {1,3,1,7,9};
	bool arrayEquality = CheckNumbers(testArray, 5, 9);
	cout << arrayEquality << endl;

	return 0;
}

int AddThreeNumbers(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}

double Divide(double num1, double num2)
{
	if (num1 > 0 && num2 > 0)
	{
		return num1 / num2;
	}

	else
	{
		return 0;
	}
}

double CalcDiscountPrice(double price, double percentage)
{
	double result = price - (price * (percentage / 100));

	return result;
}

bool AreEqual(int num1, int num2)
{
	return num1 == num2;
}

bool IsInRange(double num)
{
	if ((num) >= 3 || (num) <= 68)
	{
		return true;
	}
}

bool CheckNumbers(int numArray[], int arraySize, int numToCheck)
{
	bool numberCheck = false;

	for (int count = 0; count < arraySize; count++)
	{
		if (numToCheck == numArray[count])
		{
			numberCheck = true;
		}
	}

	return numberCheck;
	
}