#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void PrintBob();
void DisplayHello();
void DisplayGoodbye();
void DisplayOne();
void DisplayTwo();
void DisplayThree();
void PrintGreeting(string name);
void PrintMessage(string message);


int main(int argc, char** argv)
{

	PrintBob();
	DisplayHello();
	DisplayGoodbye();
	DisplayOne();
	DisplayTwo();
	DisplayThree();

	PrintGreeting("Jacob");
	PrintMessage("apples are good for you");

}

void PrintBob()
{
	cout << "Hello Bob" << endl;
}

void DisplayHello()
{
	cout << "Hello" << endl;
}

void DisplayGoodbye()
{
	cout << "Goodbye" << endl;
}

void DisplayOne()
{
	cout << "One" << endl;
}

void DisplayTwo()
{
	cout << "Two" << endl;
}

void DisplayThree()
{
	cout << "Three" << endl;
}

void PrintGreeting(string name)
{
	cout << "Hello " << name;
	cout << " 2 + 3 = ";
	cout << 2 + 3;
	cout << endl;
}

void PrintMessage(string message)
{
	cout << "You have a new message which reads: " << message << "!" << endl;
}

