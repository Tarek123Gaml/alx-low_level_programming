#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
*/

int main(void)
{
	int count;
	unsigned long a1 = 0, a2 = 1;

	for (count = 0; count < 50; count++)
	{
		sum = a1 + a2;
		printf("%lu", sum);

		a1 = a2;
		a2 = sum;

		if (count == 49)
			printf('\n');
		else
			printf(", ");
	}
	return (0);
}
