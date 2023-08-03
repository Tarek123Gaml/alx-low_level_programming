#include "main.h"

/**
 * _pow_recursion - return x powr y
 *
 * @x: takes input
 * @y: takes input
 *
 * Return: x powr y
*/

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		x *= _pow_recursion(x, (y - 1));
	}

	return (x);
}
