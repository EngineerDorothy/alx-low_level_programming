#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if character is upper case or not
 *
 * @c: character in ASCII
 *
 * Return: value 1 if true 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
