#include "main.h"

/**
 * print_square - print size square
 *
 * @size: takes input
 *
 * Return: 0
*/

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
