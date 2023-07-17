#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print 0, 1, -9
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + 48);

		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}

		a++;
	}
	putchar('\n')

	return (0);
}
