#include <stdlib.h>
#include <time.h>
#include <sdtio.h>

/**
 * main - point
 *
 * Description: true or false
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n[-1] > 5)
		printf("Last digit of %d is %d and is greater than 5", n, n[-1]);
	else if (n[-1] == 0)
		printf("Last digit of %d is %d and is 0", n, n[-1]);
	else if (n[-1] > 0 && n[-1] < 5)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, n[-1]);
	return (0);
}
