/*
 ***********************************************************************************************************************************************************
 *	Script Name:	Honors_Project.cpp
 *	Author:			Bryan Finn
 *	Class:			CIS 130 - C++ Honors Project
 *	Professor:		Tim Moriarity
 *	Purpose:		Write a program that tests the "My_numbers_10_30" class. It will randomly generate 11 unique integers between 10 and 30, inclusively.
 *					With the 11 unique values, we will figure out the minimum, maximum, median, average, and total sum. We will be able to sort in either
 *					ascending or descending order while the previous values (min, max, median, etc) all remain the same. Moreover, we will display the
 *					list of prime numbers in these arrays. We hope to demonstrate our mastery of the concepts surrounding arrays and objects.
 ***********************************************************************************************************************************************************	
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "My_numbers_10_30.h"
using namespace std;


int main()
{
	srand(time(NULL)); //was in original test code, mentioned not to modify this code
	My_numbers_10_30 numbers;

	numbers.print_all_details();
	cout << "\nAfter ascending sort\n";
	numbers.sort_asc();
	numbers.print_all_details();
	numbers.print_prime_arr_int_numbers();

	cout << "\n-------------- repopulating------------\n";
	numbers.repopulate_unique_numbers();
	numbers.print_all_details();
	cout << "\nAfter descending sort\n";
	numbers.sort_desc();
	numbers.print_all_details();
	numbers.print_prime_arr_int_numbers();

	return 0;
}


/*
************************************
* Old Code replaced prior to Ch 13 *
************************************
*/

//using namespace std;
//#include <iostream>
//
//bool isPrime(int);
//
//int main() {
//	string name = "Bryan Finn";
//	string semesterSeason = "Spring";
//	int semesterYear = 2021;
//
//	cout << "My name is " << name << "." << endl;
//	cout << "This is the " << semesterSeason << " " << semesterYear << " Semester." <<  endl;
//	cout << "This honors project reinforces the material learned each chapter at a deeper level." << endl;
//
//	int userEnteredNumber;
//	bool isPrimeFlag;
//	
//	
//	cout << "Please enter in any integer: ";
//	cin >> userEnteredNumber;
//
//	isPrimeFlag = isPrime(userEnteredNumber);
//	
//	if (isPrimeFlag)
//		cout << userEnteredNumber << " is prime." << endl;
//	else
//		cout << userEnteredNumber << " is NOT prime." << endl;
//
//}
//
//bool isPrime(int numberToCheck) {
//	bool isPrimeFlag = true;
//	if (numberToCheck == 0 || numberToCheck == 1)
//		isPrimeFlag = false;
//
//	for (int i = 2; i < numberToCheck; i++) {
//		if ((numberToCheck % i) == 0)
//			isPrimeFlag = false;
//	}
//	
//	return isPrimeFlag;
//}
