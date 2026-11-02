#include <iostream>
#include <new> // Used for std::bad_alloc exception

using namespace std;

//Obtains three integer values from the user
void getInput(int& value1, int& value2, int& value3);

//Display variables, pointer addresses, and values
void displayData(int value1, int value2, int value3, int* ptr1, int* ptr2, int* ptr3);

int main() {

	//integer variables to store the values entered by the user
	int value1;
	int value2;
	int value3;

	//Pointer Variables set to nullptr because not pointing to valid memory location yet

	int* ptr1 = nullptr;
	int* ptr2 = nullptr;
	int* ptr3 = nullptr;

	//Get user input
	getInput(value1, value2, value3);

	try {

		ptr1 = new int;
		ptr2 = new int;
		ptr3 = new int;

		//Store the values in the memory locations pointed to by the pointers

		*ptr1 = value1;
		*ptr2 = value2;
		*ptr3 = value3;

		//Display Results
		displayData(value1, value2, value3, ptr1, ptr2, ptr3);

		//release dynamically allocated memory to prevent memory leaks
		delete ptr1;
		delete ptr2;
		delete ptr3;

		//Set pointers to nullptr after deleting to avoid dangling pointers
		ptr1 = nullptr;
		ptr2 = nullptr;
		ptr3 = nullptr;

		std::cout << "\nMemory successfully released." << std::endl;
	}
	catch (std::bad_alloc& exception) {

		//If memory allocation fails, trows a bad_alloc exception and display an error message
		std::cout << "Memory allocation failed: " << exception.what() << std::endl;
	}

	return 0;
}

//Function: getInput
void getInput(int& value1, int& value2, int& value3) {
	
	std::cout << "Enter the first integer: ";
	std::cin >> value1;

	std::cout << "Enter the second integer: ";
	std::cin >> value2;

	std::cout << "Enter the third integer: ";
	std::cin >> value3;
}

//Function: displayData
void displayData(int value1, int value2, int value3, int* ptr1, int* ptr2, int* ptr3) {

	std::cout << "\n---------- Variable Values ---------\n";
	std::cout << "Value 1: " << value1 << std::endl;
	std::cout << "Value 2: " << value2 << std::endl;
	std::cout << "Value 3: " << value3 << std::endl;

	std::cout << "\n---------- Pointer Addresses ---------\n";
	std::cout << "Address of ptr1: " << ptr1 << std::endl;
	std::cout << "Address of ptr2: " << ptr2 << std::endl;
	std::cout << "Address of ptr3: " << ptr3 << std::endl;

	std::cout << "\n---------- Dereferenced Pointer Values ---------\n";
	std::cout << "*ptr1 = " << *ptr1 << std::endl;
	std::cout << "*ptr2 = " << *ptr2 << std::endl;
	std::cout << "*ptr3 = " << *ptr3 << std::endl;
}