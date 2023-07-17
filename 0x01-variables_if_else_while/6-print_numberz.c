#include <stdio.h>

/**
 * main - point
 *
 * Description: print singl numbers
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');

	return (0);
}
