#include "main.h"
/**
 * _strlen - use the pointer to returns the length of a string
 * @s: pointer to int s location
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
