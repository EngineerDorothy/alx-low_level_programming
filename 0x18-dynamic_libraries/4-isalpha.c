#include "main.h"
/**
 * _isalpha - Begin here
 *
 * return 1 if lower or upper case and 0 if not an alphabet
 *
 * @c: Character ASCII code
 *
 * Return: always 0 (true)
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'A') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
