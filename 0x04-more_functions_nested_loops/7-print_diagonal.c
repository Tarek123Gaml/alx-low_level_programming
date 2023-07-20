#include "main.h"

/**
 * print_diagonal - print line
 *
 * @n: takes input
 *
 * Return: 0
*/

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
		{
			if (a == 1)
			{
				_putchar('\\');
				_putchar('\n');
			}
			if (a > 1)
			{
				for (b = 1; b <= a; b++)
					_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
