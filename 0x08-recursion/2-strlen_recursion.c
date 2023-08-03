#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - return string lenth
 *
 * @s: takes input
 *
 * Return: lenth string
*/

int _strlen_recursion(char *s)
{
	int lenth = 0;

	if (*s > '\0')
	{
		lenth += _strlen_recursion(s + 1) + 1;
	}

	return (lenth);
}
