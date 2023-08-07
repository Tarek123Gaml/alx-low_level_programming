#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatnat two string
 * @s1: takes input
 * @s2: takes input
 *
 * Return: Always 0.
*/

char *str_concat(char *s1, char *s2)
{
	int i, size1 = 0, size2 = 0;
	char *c;

	for (; s1[size1] != '\0'; size1++)
		;

	for (; s2[size2] != '\0'; size2++)
		;

	c = malloc((size1 + size2) * sizeof(char) + 1);

	if (c == 0)
		return (0);

	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
			c[i] = s1[i];

		else
			c[i] = s2[i - size1];
	}
	m[i] = '\0';

	return (m);
}
