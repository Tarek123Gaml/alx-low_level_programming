#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible diffrent combinatios of tow digit
 *
 * Return: always 0 (seccess)
*/

int main(void)
{
	int a = 0, a2;

	while (a < 10)
	{
		a2 = 0;

		while (a2 < 10)
		{
			if (a != a2 && a < a2)
			{
				putchar(a + 48);
				putchar(a2 + 48);

				if (a + a2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a2++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
