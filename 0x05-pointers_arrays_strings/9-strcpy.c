#include "main.h"

/**
 * _strcpy - copy string to other
 *
 * @dest: takes inputs
 *
 * @src: takes inputs
 *
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		i++,
		dest[i] = src[i];
	}

	return (dest);
}
