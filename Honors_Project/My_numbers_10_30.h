/*
 ***********************************************************************************************************************************************************
 *	Script Name:	My_numbers_10_30.h
 *	Author:			Bryan Finn
 *	Class:			CIS 130 - C++ Honors Project
 *	Professor:		Tim Moriarity
 *	Purpose:		This is the defintion of the My_numbers_10_30 class where we write out each of the member function headers to give a picture overview.
 *					We want to encourage encapsulation and data hiding with the access specifiers. Preprocessor directives to ensure if the project grows
 *					that we only create one reference to this file with the #include "My_numbers_10_30.h" to save on memory.
 ***********************************************************************************************************************************************************
*/

#ifndef MY_NUMBERS_10_30_H
#define MY_NUMBERS_10_30_H

class My_numbers_10_30
{
	private:
		static const int size = 11;
		int arr_int_numbers[size];
		void bubbleSort(int[], int);
		void selectionSort(int[], int);
		void swap(int&, int&);

	public:
		My_numbers_10_30();
		float get_average();
		int get_maximum();
		int get_median();
		int get_minimum();
		int get_total();
		bool is_it_prime(int);
		void print_all_arr_int_numbers();
		void print_all_details();
		void print_prime_arr_int_numbers();
		void repopulate_unique_numbers();
		void sort_asc();
		void sort_desc();
};

#endif // !MY_NUMBERS_10_30_H

