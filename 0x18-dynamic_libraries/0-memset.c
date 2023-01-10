#include "main.h"

/**
 * _memset - fills n bytes of the memory pointed by s
 * with the byte b
 *
 * @s: pointer to the array location
 *
 * @b: constant byte to replaced sorted date
 *
 * @n: number of bytes to be replaced
 *
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
	{
		memory[index] = value;
	}

	return (memory);
}
