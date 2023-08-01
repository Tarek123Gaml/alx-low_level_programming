#include "main.h"

/**
 * *_memcpy - return order
 *
 * @dest: takes inputs
 * @src: takes inputs
 * @n: takes inputs
 *
 * Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
