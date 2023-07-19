#include <stdio.h>

/**
 * natural_c - check the code.
 *
 * Return: Always 0.
*/

void natural_c(void)
{
	int a, sum;

	for (a = 1; 1 < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum += a;
	}
	printf("%d\n",sum);
}
