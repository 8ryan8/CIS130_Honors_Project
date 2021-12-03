/*
 ***********************************************************************************************************************************************************
 *	Script Name:	My_numbers_10_30.cpp
 *	Author:			Bryan Finn
 *	Class:			CIS 130 - C++ Honors Project
 *	Professor:		Tim Moriarity
 *	Purpose:		This is the implementation of the My_numbers_10_30 class where we write out the code of each member function. Each member function has
 *					a description of how to use it at the top.
 ***********************************************************************************************************************************************************
*/


using namespace std;
#include "My_numbers_10_30.h"
#include <iostream>
#include <random>

/*
 ***********************************************************************************************************************************************************
 * Member Function:	My_numbers_10_30
 * Purpose:			This default constructor invokes the repopulate_unique_numbers() upon creation of an object to generate 10 unique, random 
 *					integers between 10 and 30, inclusive.
 * Parameters:		N/A
 * Return value:	N/A
 ***********************************************************************************************************************************************************
*/
My_numbers_10_30::My_numbers_10_30()
{
	repopulate_unique_numbers();
}

/*
 ***********************************************************************************************************************************************************
 * Member Function:	get_average()
 * Purpose:			This member function totals all of the unique values and divides by the size of the array returning an average value as a float.
 * Parameters:		N/A
 * Return value:	float
 ***********************************************************************************************************************************************************
*/
float My_numbers_10_30::get_average()
{
	int total = 0;

	for (int i = 0; i < size; i++)
	{
		total += arr_int_numbers[i];
	}

	float sizeOfArrayFloat = static_cast<float>(size);
	float average = total / sizeOfArrayFloat;

	return average;
}

/*
 ***********************************************************************************************************************************************************
 * Member Function:	get_maximum()
 * Purpose:			This member function finds the highest value in the array and returns the integer value.
 * Parameters:		N/A
 * Return value:	int
 ***********************************************************************************************************************************************************
*/
int My_numbers_10_30::get_maximum()
{
	int maximum = arr_int_numbers[0];

	for (int i = 0; i < size; i++)
	{
		if (arr_int_numbers[i] > maximum)
			maximum = arr_int_numbers[i];
	}

	return maximum;
}

/*
 ***********************************************************************************************************************************************************
 * Member Function:	get_median()
 * Purpose:			This member function finds the median value by utilizing a selection sort and using integer divison to return the middle index value
 *					as an integer value.
 * Parameters:		N/A
 * Return value:	int
 ***********************************************************************************************************************************************************
*/
int My_numbers_10_30::get_median()
{
	int tempArray[size];

	for (int i = 0; i < size; i++)
		tempArray[i] = arr_int_numbers[i];
	
	selectionSort(tempArray, size);
	int median = tempArray[(size / 2)];

	return median;
}


/*
 ***********************************************************************************************************************************************************
 * Member Function:	get_minumum()
 * Purpose:			This member function finds the lowest value in the array and returns the integer value.
 * Parameters:		N/A
 * Return value:	int
 ***********************************************************************************************************************************************************
*/
int My_numbers_10_30::get_minimum()
{
	int minimum = arr_int_numbers[0];

	for (int i = 0; i < size; i++)
	{
		if (arr_int_numbers[i] < minimum)
			minimum = arr_int_numbers[i];
	}

	return minimum;
}

/*
 ***********************************************************************************************************************************************************
 * Member Function:	get_total()
 * Purpose:			This member function totals all of the unique values in the array and returns the sum as an integer value.
 * Parameters:		N/A
 * Return value:	int
 ***********************************************************************************************************************************************************
*/
int My_numbers_10_30::get_total()
{
	int total_val = 0;
	
	for (int i = 0; i < size; i++)
	{
		total_val += arr_int_numbers[i];
	}

	return total_val;
}


/*
 ***********************************************************************************************************************************************************
 * Member Function:	is_it_prime(int numberToCheck)
 * Purpose:			This member function determines if a value is prime and returns a boolean value
 * Parameters:		int numberToCheck - enter an integer value that you want to check whether it is prime or not.
 * Return value:	bool
 ***********************************************************************************************************************************************************
*/
bool My_numbers_10_30::is_it_prime(int numberToCheck)
{
	bool isPrimeFlag = true;
	if (numberToCheck == 0 || numberToCheck == 1)
		isPrimeFlag = false;
	
	for (int i = 2; i < numberToCheck; i++) {
		if ((numberToCheck % i) == 0)
			isPrimeFlag = false;
	}
	
	return isPrimeFlag;
}

/*
 ***********************************************************************************************************************************************************
 * Member Function:	print_all_arr_int_numbers()
 * Purpose:			This member function prints all of the random, unique values in the array between 10 and 30, inclusive.
 * Parameters:		N/A
 * Return value:	N/A
 ***********************************************************************************************************************************************************
*/
void My_numbers_10_30::print_all_arr_int_numbers()
{
	cout << "array: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr_int_numbers[i] << " ";
	}
	cout << endl;
}


/*
 ***********************************************************************************************************************************************************
 * Member Function:	print_all_details()
 * Purpose:			This member function invokes all of the accessor functions to check all of the values at once (max, min, average, median, and total).
 * Parameters:		N/A
 * Return value:	N/A
 ***********************************************************************************************************************************************************
*/
void My_numbers_10_30::print_all_details()
{
	cout << "\n---------------" << endl;
	cout << "| ALL DETAILS |" << endl;
	cout << "---------------" << endl;
	cout << "maximum: " << get_maximum() << endl;
	cout << "minimum: " << get_minimum() << endl;
	cout << "average: " << get_average() << endl;
	cout << "median: " << get_median() << endl;
	cout << "total: " << get_total() << endl;

	print_all_arr_int_numbers();
	cout << endl;
}

/*
 ***********************************************************************************************************************************************************
 * Member Function:	print_prime_arr_int_numbers()
 * Purpose:			This member function will only print the prime values, it will check for primeness of each element in the array. If none are prime, prints
 *					"N/A"
 * Parameters:		N/A
 * Return value:	N/A
 ***********************************************************************************************************************************************************
*/
void My_numbers_10_30::print_prime_arr_int_numbers()
{
	int countNumOfPrimeNumbers = 0;

	cout << "Prime Number(s): ";

	for (int i = 0; i < size; i++)
	{
		if (is_it_prime(arr_int_numbers[i]))
		{
			cout << arr_int_numbers[i] << " ";
			countNumOfPrimeNumbers++;
		}
			
	}

	if (countNumOfPrimeNumbers == 0)
		cout << "N/A";
	
	cout << endl;
}

/*
 ***********************************************************************************************************************************************************
 * Member Function:	repopulate_unique_numbers()
 * Purpose:			This member function will repopulate/assign the int array data member with 10 unique, random values between 10 and 30, inclusive.
 * Parameters:		N/A
 * Return value:	N/A
 ***********************************************************************************************************************************************************
*/
void My_numbers_10_30::repopulate_unique_numbers()
{
	const int MIN = 10;
	const int MAX = 30;
	int number;

	random_device engine;
	uniform_int_distribution<int> randomInt(MIN, MAX);

	for (int i = 0; i < size; i++)
	{
		bool isUnique;
		
		do
		{
			isUnique = true;
			number = randomInt(engine);
			for (int j = 0; j < i; j++)
			{
				if (arr_int_numbers[j] == number)
				{
					isUnique = false;
					break;
				}
			}
		} while (!isUnique);

		arr_int_numbers[i] = number;
	}


}


/*
 ***********************************************************************************************************************************************************
 * Member Function:	sort_asc()
 * Purpose:			This member function will rearrange the array in increasing order using the Bubble Sort Algorithim.
 * Parameters:		N/A
 * Return value:	N/A
 ***********************************************************************************************************************************************************
*/
void My_numbers_10_30::sort_asc()
{
	bubbleSort(arr_int_numbers, size);
}

/*
 ***********************************************************************************************************************************************************
 * Member Function:	sort_asc()
 * Purpose:			This member function will rearrange the array in decreasing order using the Selection Sort Algorithim.
 * Parameters:		N/A
 * Return value:	N/A
 ***********************************************************************************************************************************************************
*/
void My_numbers_10_30::sort_desc()
{
	selectionSort(arr_int_numbers, size);
}

/*
 ***********************************************************************************************************************************************************
 * Member Function:	bubbleSort()
 * Purpose:			This member function will arrange the array in ascending order while making several passing through the array.
 * Parameters:		int array[] - Pass any integer array for sorting
 *					int size - This is the size of the int array[]
 * Return value:	N/A
 ***********************************************************************************************************************************************************
*/
void My_numbers_10_30::bubbleSort(int array[], int size)
{
	int maxElement;
	int index;

	for (maxElement = (size - 1); maxElement > 0; maxElement--)
	{
		for (index = 0; index < maxElement; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap(array[index], array[index + 1]);
			}
		}
	}
}
     
/*
 ***********************************************************************************************************************************************************
 * Member Function:	selectionSort()
 * Purpose:			This member function will arrange the array in descending order moving each value to its final sorted position, less passes than bubble sort.
 * Parameters:		int array[] - Pass any integer array for sorting
 *					int size - This is the size of the int array[]
 * Return value:	N/A
 ***********************************************************************************************************************************************************
*/
void My_numbers_10_30::selectionSort(int array[], int size)
{
	int maxIndex, maxValue;

	for (int start = 0; start < (size - 1); start++)
	{
		maxIndex = start;
		maxValue = array[start];
		for (int index = start + 1; index < size; index++)
		{
			if (array[index] > maxValue)
			{
				maxValue = array[index];
				maxIndex = index;
			}
		}
		swap(array[maxIndex], array[start]);
	}
}

/*
 ***********************************************************************************************************************************************************
 * Member Function:	swap()
 * Purpose:			This member function swaps two integers values used in the sorting algorithms to increase readability
 * Parameters:		int& integer1 - It will pass your first integer value by reference to replace it with your second integer
 *					int& integer2 - It will pass your second integer value by reference to replace it with your first integer
 * Return value:	N/A
 ***********************************************************************************************************************************************************
*/
void My_numbers_10_30::swap(int& integer1, int& integer2)
{
	int temp = integer1;
	integer1 = integer2;
	integer2 = temp;
}