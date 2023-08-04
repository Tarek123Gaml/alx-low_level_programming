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
	int i;
	(void)argc;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
