#include "main.h"
/**
 * *_strcpy - update value
 *
 * @dest: array to be evaluate
 *
 * @src: string to be evaluate
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (*(src + len))
	{
		len++;
	}
	for ( ; i < len ; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + len) = '\0';
	return (dest);
}
