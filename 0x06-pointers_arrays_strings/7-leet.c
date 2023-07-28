#include "main.h"

/**
 * leet - return order
 *
 * @s: takes input
 *
 * Return: 0
*/

char *leet(char *s)
{
	char *sp = s;
	char k[] = {'A', 'E', 'O', 'T', 'L'};
	char v[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(k) / sizeof(char); i++)
		{
			if (*s == k[i] || *s == k[i] + 32)
				*s = 48 + v[i];
		}
		s++;
	}
}
