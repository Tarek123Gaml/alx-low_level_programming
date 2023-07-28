#include "main.h"

/**
 * rot13 - return order
 *
 * @s: takes input
 *
 * Return: 0
*/

char *rot13(char *s)
{
	int i;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char A[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == a[i])
			{
				*s = A[i];
				break
			}
		}
		s++;
	}
	return (ptr);
}
