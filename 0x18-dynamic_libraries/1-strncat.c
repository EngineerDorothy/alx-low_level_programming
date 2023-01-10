#include "main.h"
/**
 * _strncat - concatenate two strings and add the inputted
 * number of their bytes
 *
 * @dest: string to be appended upon
 *
 * @src: string to be completed at the end of dest
 *
 * @n: integer parameter to compare index to
 *
 * Return: new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, dest_len = 0;

	while (dest[a++])
		dest_len++;

	for (a = 0; src[a] && a < n; a++)
		dest[dest_len++] = src[a];

	return (dest);
}
