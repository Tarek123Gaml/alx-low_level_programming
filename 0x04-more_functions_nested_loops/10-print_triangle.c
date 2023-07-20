#include "main.h"

/**
 * print_triangle - print task
 *
 * @size: takes inputs
 *
 * Return: 0
*/

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; a <= size; b++)
			{
				if ((a + b) <= size)
					_putchar(' ');
				else
					_puchat('#');
			}
			_putchar('\n');
		}
	}
}
