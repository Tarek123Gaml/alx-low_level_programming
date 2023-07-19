#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
*/

int main(void)
{
	unsigned long a1 = 0, a2 = 1, sum;

	float total;

	while (1)
	{
		sum = a1 + a2;

		if (sum > 4000)
			break;

		if (sum % 2 == 0)
			total += sum;

		a1 = a2;
		a2 = sum;
	}
	printf("%.0f\n", total);

	return (0);
}
