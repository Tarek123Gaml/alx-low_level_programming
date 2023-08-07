#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creat array
 * @size: take size of array
 * @c: take char in array
 *
 * Return: array or null
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
