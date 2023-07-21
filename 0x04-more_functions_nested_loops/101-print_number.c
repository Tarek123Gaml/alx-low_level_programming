#include "main.h"

/**
 * print_number - that function print input number
 *
 * @n: takes input
 *
 * Return: 0
*/

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + 48);
}
