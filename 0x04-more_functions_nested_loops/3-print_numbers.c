#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: Always 0.
*/

oid print_numbers(void)
{
	int a = 0;

	do {
		_putchar(a + 48);
		a++;
	} while (a >= 0 && a <= 9);
	_putchar('\n';
}
