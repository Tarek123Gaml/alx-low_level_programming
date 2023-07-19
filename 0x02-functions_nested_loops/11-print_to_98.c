#include "main.h"

/**
 *  print_to_98 - check the code
 *
 * @n: takes inputs
 *
 * Return: Always 0.
*/

void print_to_98(int n)
{
	if (n < 98)
		for (a = n; a < 98; a++)
			printf("%d, ", a);
	else
		for (a = n; a > 98; a--)
			printf("%d, ", a);
	printf("98\n");
}
