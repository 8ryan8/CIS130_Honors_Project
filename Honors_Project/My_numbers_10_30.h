#ifndef MY_NUMBERS_10_30_H
#define MY_NUMBERS_10_30_H

class My_numbers_10_30
{
	private:
		static const int size = 11;
		int arr_int_numbers[size];

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

