#include <stdlib.h>
#include "main.h"

/**
 * _abs - computes absolute
 *
 * @n: takes inputs
 *
 * Return: Always 0 (seccess)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
