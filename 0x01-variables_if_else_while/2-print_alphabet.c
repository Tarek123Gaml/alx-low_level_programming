#include <stdio.h>

/**
 * main - point
 *
 * Description: print alphabet
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	char ch = "a";

	while (ch <= "z")
	{
		putcher(ch);
		ch++;
	}
	putcher("\n");
	
	return (0);
}
