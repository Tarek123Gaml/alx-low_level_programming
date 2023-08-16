#include "function_pointers.h"

/**
 * print_name - that function print name
 *
 * @name: takes input as string
 * @f: takes input as function
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

