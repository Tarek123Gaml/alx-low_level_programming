#include "main.h"

/**
 * puts_half - print half string
 *
 * @str: takes string as input
 *
 * Return: 0
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[l] != '\0')
		l++;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
