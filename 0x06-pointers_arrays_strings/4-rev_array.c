#include "main.h"

/**
 * reverse_array - function return order
 *
 * @a: input
 * @n: input
 *
 * Return: 0
*/
void reverse_array(int *a, int n)
{
	int b[100];
	int i;

	for (i = 0; i < n; i++)
		b[i] = a[n - i - 1];

	return (*b);
}
