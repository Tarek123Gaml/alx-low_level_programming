#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
*/

int main(void)
{
	int a, sum;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			sum += a;
	}
	printf("%d\n", sum);

	return (0);
}
