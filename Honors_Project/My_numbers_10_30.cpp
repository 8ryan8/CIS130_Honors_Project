using namespace std;
#include "My_numbers_10_30.h"
#include <iostream>
#include <random>

using namespace std;

My_numbers_10_30::My_numbers_10_30()
{
	repopulate_unique_numbers();
}
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
int My_numbers_10_30::get_median()
{
	int tempArray[size];

	for (int i = 0; i < size; i++)
		tempArray[i] = arr_int_numbers[i];
	
	selectionSort(tempArray, size);
	int median = tempArray[(size / 2)];

	return median;
}
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
int My_numbers_10_30::get_total()
{
	int total_val = 0;
	
	for (int i = 0; i < size; i++)
	{
		total_val += arr_int_numbers[i];
	}

	return total_val;
}
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
void My_numbers_10_30::print_all_arr_int_numbers()
{
	cout << "array: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr_int_numbers[i] << " ";
	}
	cout << endl;
}
void My_numbers_10_30::print_all_details()
{
	cout << "\n---------------" << endl;
	cout << "| ALL DETAILS |" << endl;
	cout << "---------------" << endl;
	cout << "maximum: " << get_maximum() << endl;
	cout << "total: " << get_total() << endl;
	cout << "minimum: " << get_minimum() << endl;
	cout << "average: " << get_average() << endl;
	cout << "median: " << get_median() << endl;

	print_all_arr_int_numbers();
	cout << endl;
}
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
void My_numbers_10_30::sort_asc()
{
	cout << "In sort_asc" << endl;
	bubbleSort(arr_int_numbers, size);
}
void My_numbers_10_30::sort_desc()
{
	cout << "In sort_desc" << endl;
	selectionSort(arr_int_numbers, size);
}

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


void My_numbers_10_30::swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}