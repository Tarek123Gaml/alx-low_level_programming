#include <stdio.h>
#include "main.h"

/**
 * _strncat - function return order
 *
 * @dest: takes inputs
 * @src: takes inputs
 * @n: takes input
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c++] = src[i];

	return (dest);
}
