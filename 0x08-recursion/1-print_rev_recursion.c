#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - print reverse string
 *
 * @s: takes inputs
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
