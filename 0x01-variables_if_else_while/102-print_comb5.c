#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: 0
*/

int main(void)
{
	int f = 0, f1;

	while (f < 100)
	{
		f1 = f;

		while (f1 < 100)
		{
			if (f1 != f)
			{
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				putchar(' ');
				putchar((f1 / 10) + 48);
				putchar((f % 10) + 48);

				if (f + f1 != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			f1++;
		}
		f++;
	}
	putchar('\n');

	return (0);
}
