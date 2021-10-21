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

using namespace std;
#include <iostream>

int main() {
	string name = "Bryan Finn";
	string semesterSeason = "Spring";
	int semesterYear = 2021;
	

	cout << "My name is " << name << "." << endl;
	cout << "This is the " << semesterSeason << " " << semesterYear << " Semester." <<  endl;
	cout << "This honors project reinforces the material learned each chapter at a deeper level." << endl;
}
