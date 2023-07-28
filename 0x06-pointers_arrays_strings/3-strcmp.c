#include "main.h"

/**
 * _strcmp - function return order
 *
 * @s1: takes input
 * @s2: takes inputs
 *
 * Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (equal);
}
