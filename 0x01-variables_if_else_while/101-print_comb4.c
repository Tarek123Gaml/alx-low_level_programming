#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible diffrent combinatios of three digit
 *
 * Return: always 0 (seccess)
*/

int main(void)
{
	int a = 0, a2, a3;

	while (a < 10)
	{
		a2 = 0;

		while (a2 < 10)
		{
			a3 = 0;

			while (a3 < 10)
			{
				if (a != a2 && a < a2 && a2 != a3 && a2 < a3)
				{
					putchar(a + 48);
					putchar(a2 + 48);
					putchar(a3 + 48);
				}

				if (a + a2 + a3 != 24)
				{
					putchar(',');
					putchar(' ');
				}
				a3++;
			}
			a2++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
