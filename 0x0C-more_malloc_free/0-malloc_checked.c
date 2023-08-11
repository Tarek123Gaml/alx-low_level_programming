#include "main.h"

/**
 * malloc_checked - return alloction
 *
 * @b: takes input
 *
 * Return: b or 98
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}

