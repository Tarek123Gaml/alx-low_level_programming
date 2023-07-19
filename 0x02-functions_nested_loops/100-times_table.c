#include "main.h"


/**
 * print_times_table - check the code.
 *
 * @n: takes inputs
 *
 * Return: Always 0.
*/

void print_times_table(int n)
{
	int a1, a2, a3;

	if (n >= 0 && n <= 16)
		for (a1 = 0; a1 <= n; a1++)
		{
			_putchar(48);
			for (a2 = 1; a2 <= n; a2++)
			{
				_putchar(',');
				_putchar(' ');

				a3 = a1 * a2;

				if (a3 < 10)
					_putchar(' ');

				if (a3 < 100)
					_putchar(' ');

				if (a3 >= 100)
				{
					_putchar((a3 / 100) + 48);
					_putchar((a3 / 10) % 10 + 48);
				}
				if (a3 > 9 && a3 < 100)
					_putchar((a3 / 10) + 48);

				_putchar((a3 % 10) + 48);
			}
			_putchar('\n');
		}
}
