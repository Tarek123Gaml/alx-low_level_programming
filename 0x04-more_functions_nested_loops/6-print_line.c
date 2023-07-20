#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: takes inputs
 *
 * Return: 0
*/

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
		for (a = n; a <= n; a++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
