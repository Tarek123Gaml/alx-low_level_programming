#include "main.h"


/**
 * times_table - check the code
 *
 * Return: Always 0.
*/

void times_table(void)
{
	int a1, a2, a3;

	for (a1 = 0; a1 < 10; a1++)
	{
		_putchar(48);
		for (a2 = 0; a2 < 10; a2++)
		{
			_putchar(',');
			_putchar(' ');

			a3 = a1 * a2;

			if (a3 <= 9)
				_putchar(' ');
			else
				_putchar((a3 / 10) + 48);
			_putchar((a3 % 10) + 48);
		}
		_putchar('\n');
	}
}
