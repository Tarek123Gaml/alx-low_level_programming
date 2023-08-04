#include <stdio.h>

/**
 * main - point entry
 *
 * @argc: count of arguments
 * @argv: values of arguments
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
