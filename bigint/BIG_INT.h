#include <iostream>
#ifndef BIG_INT_H
#define BIG_INT_H

const int digit_size = 200;

class big_int{
	public:
		big_int();
		// Initializes big_int to zero.

		big_int(int n);
		// Initializes big_int to int.

		big_int(char[]);
		// Initializes big_int to char[].

		void print();
		// This method prints at most 80 digits per line.

		bool compare_to(big_int rhs);
		// Initializes bool to false.

	private:
		char num[digit_size];
		bool result;
};
#endif
