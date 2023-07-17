#include <stdio.h>

/**
 * main - point
 *
 * Description: print numbers from 0 to 9
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar("%d", a);
		a++;
	}
	putchar("\n");

	return (0);
}
