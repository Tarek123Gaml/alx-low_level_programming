#include "main.h"

/**
 * _memset - function print order
 *
 * @s: takes inputs
 * @b: takes inputs
 * @n: takes inputs
 *
 * Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < b; i++)
	{
		s[i] = b;
	}

	return (s);
}
