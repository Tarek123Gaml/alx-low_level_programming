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
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		print("%d\n", argv[1] + argv[2]);
	}

	return (0);
}
