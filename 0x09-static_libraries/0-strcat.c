#include <stdio.h>
#include "main.h"
/**
 * _strcat - function return cocatnat
 *
 * @dest: takes inputs
 * @src: takes input
 *
 * Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;

	while (dest[c])
		c++;

	for (c1 = 0; src[c1]; c1++)
		dest[c++] = src[c1];

	return (dest);
}
