#include "main.h"
/**
 * _strcat - concatenates @src to @dest
 *
 * @src: the source of the string to append to @dest
 *
 * @dest: the destination of the string to be concatenated
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
