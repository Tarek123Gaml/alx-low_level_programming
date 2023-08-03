#include "main.h"

/**
 * _sqrt_recursion - return square number
 * square: return task
 *
 * @n: takes input
 * @val: takes input
 *
 * Return: square n
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - return task
 *
 * @n: takes input
 * @val: takes input
 *
 * Return: square number
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val++));
	else
		return (-1);
}
