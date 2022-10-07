#include "main.h"

/**
 * malloc_checked - dynamically allocates memory
 * @b: number of bytes
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)

{

	int *pointer;



	pointer = (int *) malloc(b);

	if (pointer == NULL)

	{

		exit(98);

	}

	else

		return (pointer);



}
