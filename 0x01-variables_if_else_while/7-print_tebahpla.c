#include <stdio.h>

/**
 * main - point
 *
 * Description: print reverse alphapet
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n')

	return (0);
}
