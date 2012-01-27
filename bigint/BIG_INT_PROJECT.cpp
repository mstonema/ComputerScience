//============================================================================
// Name        : BIG_INT_PROJECT.cpp
// Author      : Michael Stoneman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BIG_INT.h"

int main() {

	big_int big_num(5252), big_num2(525);

	std::cout << "Big Int is initialized to zero." << std::endl;

	//this is the couts the print function.
	big_num.print();

	std::cout << "Big Num is equal to Big Num2: ";

	//This outputs whether big_num is equal to big_num2.
	if(big_num.compare_to(big_num2))
		std::cout << "true";
	else
		std::cout << "false";
	return 0;
}

big_int::big_int()
//This starts at the first index and goes through
//all the indexes, and puts the character zero in them.
{
	for(int i = 0; i <= digit_size; ++i)
	{
		num[i] = '0';
	}
}

big_int::big_int(int n)

{
	int i = 0;
	for(i = 0; i <= digit_size; ++i)    //this cleans out the garbage.
	{
		num[i] = '0';
	}

	i = 0;

	while(n != 0)	//This divides the number by 10
					//and then store the remainder to the array.
	{
		num[i] = n % 10 + '0';
		n = n / 10;
		++i;
	}
}

big_int::big_int(char[digit_size])
{
for(int i = 0; i <= digit_size; ++i)   //This cleans out the garbage..
	{
		num[i] = '0';
	}
}

void big_int::print()
{
	for(int i = 79; i >= 0; --i)
	{
		//This prints out the digits and does not print
		//the character 0.
		if(num[i] != '0')
		{
		std::cout << num[i];
		}

		else(num[i] = '0');
	}

	std::cout << std::endl;
}

bool big_int::compare_to(big_int rhs)
{
	for(int i = 0; i < digit_size; ++i)
	{
		if(num[i] != rhs.num[i])
		{
			result = false;
			return result;
		}
	}
}
