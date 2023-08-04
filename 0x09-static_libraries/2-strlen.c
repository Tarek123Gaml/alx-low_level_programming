#include "main.h"

/**
 * _strlen -  returns the length of a string
 *
 * @s: takes input
 *
 * Return: Always 0.
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}
