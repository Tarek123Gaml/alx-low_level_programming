#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	int a = 48;

	while (a <= 102)
	{
		putchar(a);

		if (a == 57)
			a += 39;
		a++;
	}
	putchar('\n');

	return (0);
}
