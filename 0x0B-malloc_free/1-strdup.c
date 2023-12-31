#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return array
 *
 * @str: takes array
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (0);

	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}

	return (m);
}
