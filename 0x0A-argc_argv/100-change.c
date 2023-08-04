#include <stdio.h>
#include <stdlib.h>

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
	if (argc == 2)
	{
		int i, cents = 0, mony = atoi(argv[1]);
		int coins[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (mony >= coins[i])
			{
				cents += mony / coins[i];
				mony = mony % coins[i];
				if (mony % coins[i] == 0)
					break;
			}
		}
		printf("%d\n", cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
