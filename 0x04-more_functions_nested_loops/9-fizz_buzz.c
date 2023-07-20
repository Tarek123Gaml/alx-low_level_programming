#include <stdio.h>

/**
 * fizz_buzz - prints
 *
 * Return: 0
*/

void fizz_buzz(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 2 != 0)
			printf("Fizz");
		else if (a % 3 != 0 && a % 2 == 0)
			printf("Buzz");
		else if (a % 3 == 0 && a % 2 == 0)
			printf("FizzBuzz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
	}
	printf("\n");
}
