#include <stdio.h>

/**
 * main - point
 *
 * Description: print all alphapet
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'a')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
