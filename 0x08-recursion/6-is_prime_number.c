#include "main.h"

/**
 * _is_prime_number - check if n is prime number
 *
 * @n: takes input
 * @other: takes input
 *
 * Return: 1 or 0
*/

int ch(int n, int other);
int _is_prime_number(int n)
{
	return (ch(n, 2));
}

/**
 * ch - check prime number
 *
 * @n: takes input
 * @other: takes input
 *
 * Return: 1 or 0
*/

int ch(int n, int other)
{
	if (other >= n && n > 1)
		return (1);
	else if (n % other == 0 || n < 2)
		return (0);
	else
		return (ch(n, other + 1));
}
