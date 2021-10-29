/*
	Bryan Finn
	CIS 130 - C++ Honors Project
	Professor Tim Moriarity

	The purpose of this project is to provide you with an opportunity to work with objectsand arrays in C++.
	The topics covered in this project include :
		[] Creating an object
		[] Developing class functions
		[] Using arrays to maintain information
		[] Sort array elements
		[] Test object using tester code

	Work for the project is broken down by chapter.
	I will be should adding code to the project as each chapter ends, 
	rather than attempt an "all-nighter" the day before it is due!


*/

/*
	Chapter 3 - Expressions and Interactivity, Chapter 4 - Making Decisions
		Create a file called Honors_Project.cpp.
		
		In it, add the following code :
			A comment block of about 10 - 15 lines with your name and purpose of the program.
			It is OK to leave empty lines in the comment block, and it will be filled later on in the semester
			
			Create an int main function that displays :
				Your name
				Semester
				A 1 line description of the project

*/

/*
Chapter 5 - Looping
	Write code to perform the following:
		Declare an integer variable
		Ask the user to enter a value for it
		Write a loop to determine if the value is a prime number, and print out appropriate messages.
*/

/*
Chapter 6 - Functions
	Modify the program to include these functions:

		int main()
			The value entered by the user should be sent into the isPrime function as an argument. 
			Print out messages "Is a prime" or "Is not a prime" depending upon the bool value returned by the isPrime function.

		bool isPrime(int)
			This function takes in an int parameter and tests if it is a prime number or not. 
	
			Move code from the int main function that tests for prime-ness into this function, 
			and ensure that the function returns a bool value of true or false.

*/

using namespace std;
#include <iostream>

bool isPrime(int);

int main() {
	string name = "Bryan Finn";
	string semesterSeason = "Spring";
	int semesterYear = 2021;

	cout << "My name is " << name << "." << endl;
	cout << "This is the " << semesterSeason << " " << semesterYear << " Semester." <<  endl;
	cout << "This honors project reinforces the material learned each chapter at a deeper level." << endl;

	int userEnteredNumber;
	bool isPrimeFlag;
	
	
	cout << "Please enter in any integer: ";
	cin >> userEnteredNumber;

	isPrimeFlag = isPrime(userEnteredNumber);
	
	if (isPrimeFlag)
		cout << userEnteredNumber << " is prime." << endl;
	else
		cout << userEnteredNumber << " is NOT prime." << endl;

}

bool isPrime(int numberToCheck) {
	bool isPrimeFlag = true;
	if (numberToCheck == 0 || numberToCheck == 1)
		isPrimeFlag = false;

	for (int i = 2; i < numberToCheck; i++) {
		if ((numberToCheck % i) == 0)
			isPrimeFlag = false;
	}
	
	return isPrimeFlag;
}
