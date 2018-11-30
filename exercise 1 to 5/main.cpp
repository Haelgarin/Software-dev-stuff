#include <string>
#include <sstream>
#include <iostream>

int main()
{
	std::string input = "";
	std::stringstream stream;

	//Exercise 1
	std::cout << "Hello World!\r\n";

	std::cout << "Hat \r\n" << "Coat\r\n";

	std::string theMessage = "Hello";
	std::cout << "The message received was " << theMessage << std::endl;

	std::string name = "Bob";
	std::cout << "Hello " << name << ", how are you today?\r\n";

	std::string boatName = "Nostromo";
	std::string serialNumber = "X394H";
	std::cout << "The name of the boat is " << boatName << " and its serial number is " << serialNumber << std::endl;

	//Exercise 2
	std::cout << "=========================================\r\n";

	std::cout << "Input your name here: ";
	std::string inputName = "";
	getline(std::cin, inputName);
	std::cout << "Hello " << inputName << std::endl;

	std::cout << "\r\nInput a colour here: ";
	std::string colour = "";
	getline(std::cin, colour);
	std::cout << "The colour is " << colour << std::endl;

	std::cout << "\r\nEnter a product type: ";
	std::string productType = "";
	getline(std::cin, productType);
	std::cout << "The type of product is " << productType << std::endl;

	std::cout << "\r\nEnter your boats serial number: ";
	std::string boatSerialNumber = "";
	getline(std::cin, boatSerialNumber);
	std::cout << "The serial number is " << boatSerialNumber << std::endl;

	std::cout << "\r\nEnter a valid postcode: ";
	std::string postcode = "";
	getline(std::cin, postcode);
	std::cout << "Your postcode is " << postcode << std::endl;
	/*
	//Exercise 3
	std::cout << "=========================================\r\n";

	std::cout << "\r\nWhat is the current count: ";
	int count = 0;
	getline(std::cin, input);
	stream.str(input);
	stream >> count;
	stream.clear();
	std::cout << "The count is " << count << std::endl;

	std::cout << "\r\nInput the current price: ";
	double price = 0.0;
	getline(std::cin, input);
	stream.str(input);
	stream >> price;
	stream.clear();
	std::cout << "The price is " << price << std::endl;

	std::cout << "\r\nEnter the width of the object: ";
	double width = 0.0;
	getline(std::cin, input);
	stream.str(input);
	stream >> width;
	stream.clear();
	std::cout << "The width is " << width << std::endl;

	std::cout << "\r\nEnter your age in years: ";
	int age = 0;
	getline(std::cin, input);
	stream.str(input);
	stream >> age;
	stream.clear();
	std::cout << "You are " << age << " years old" << std::endl;

	std::cout << "\r\nEnter the number of boxes: ";
	int numberOfBoxes = 0;
	getline(std::cin, input);
	stream.str(input);
	stream >> numberOfBoxes;
	stream.clear();
	std::cout << "There are " << numberOfBoxes << " boxes" << std::endl;
	*/
	//Exercise 4
	std::cout << "=========================================\r\n";

	int wholeNumber = 10;
	std::cout << wholeNumber << std::endl;

	double totalCost = 3.50;
	std::cout << totalCost << std::endl;

	int countOfDogs = 15;
	std::cout << countOfDogs << std::endl;

	int peopleInStadium = 42;
	std::cout << "\r\nThe number of people in the stadium is " << peopleInStadium << std::endl;

	double ropeLength = 4.56;
	std::cout << "\r\nHalf the length is " << ropeLength / 2 << std::endl;

	int number1 = 3;
	double number2 = 8;
	std::cout << "\r\nThe sum of " << number1 << " and " << number2 << " = " << number1 + number2 << std::endl;

	//Exercise 5
	std::cout << "=========================================\r\n";




	return 0;
}

