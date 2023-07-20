#include "main.h"

/**
 * print_most_numbers - print 0-9 without 2 4
 *
 * Return: 0
*/

void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a + 48);
	}
	_putchar("\n");
}
