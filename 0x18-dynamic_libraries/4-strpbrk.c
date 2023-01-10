#include "main.h"

/**
 * _strbrk - searches a string for any set of bytes
 *
 * @s: the string to be searched
 *
 * @accept: the set of bytes to be searched for
 *
 * Return: if true to the pointer to be matched byte
 * else NULL
 */
char *_strbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
