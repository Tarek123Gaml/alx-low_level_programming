#include "main.h"

/**
 * print_last_digit - check the code
 *
 * @n: takes inputs
 *
 * Return: Always 0.
*/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;
	_putchar(ld + 48);
	return (ld);
}
