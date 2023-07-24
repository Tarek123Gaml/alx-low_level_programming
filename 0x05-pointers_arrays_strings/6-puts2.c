#include "main.h"

/**
 * puts2 -  prints every other character of a string
 *
 * @str: takes input
 *
 * Return: 0
*/

void  puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i] + 0);
		i += 2;
	}
	_putchar('\n');
}
