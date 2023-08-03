#include "main.h"

/**
 * factorial - return factorial naumber
 *
 * @n: takes input
 *
 * Return: factorial n
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
