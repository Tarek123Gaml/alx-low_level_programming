#include <stdio.h>

/**
 * main - point
 *
 * Description: print all alphapet except q and e
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n')

	return (0);
}
