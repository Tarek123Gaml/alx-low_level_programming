#include "main.h"

/**
 * print_alphabet_x10 - that function well print alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int i, ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
