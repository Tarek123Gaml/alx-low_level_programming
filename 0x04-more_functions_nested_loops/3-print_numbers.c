#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: Always 0.
*/

oid print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(a + 48);
		a++;
	}
	_putchar("\n");
}
