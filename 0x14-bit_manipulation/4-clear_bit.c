#include "main.h"

/**
 * clear_bit - a function that clears the value of a bit at a given index
 * @n: the number to be operated on
 * @index: the index starting from 0
 * Return: returns 1 when Success, and -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)

{

	int mask;



	if (index > 63)

		return (-1);



	mask = 1 << index;

	*n = (*n & ~mask);



	return (1);

}
