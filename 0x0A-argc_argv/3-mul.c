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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", argv[1] + argv[2]);
	}

	return (0);
}
