#include "function_pointers.h"

/**
 * print_name - that function print name
 *
 * @name: takes input as string
 * @f: takes input as function
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

