#include "main.h"

/**
 * islower - check char
 *
 * @c: takes input
 *
 * Return: 0
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdel - check input
 *
 * @c: takes input
 *
 * Return: 0
*/

int isdel(char c)
{
	int i;
	char del[] = " \t\n,.;!?\"(){}";

	for (i = 0; i <= 12; i++)
		if (c == del[i])
			return (1);
	return (0);
}

/**
 * cap_string - check str
 *
 * @str: takes inputs
 *
 * Return: 0
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int founddel = 1;

	while (*str)
	{
		if (isdel(*str))
			founddel = 1;
		else if (islower(*str) && founddel)
		{
			*str -= 32;
			founddel = 0;
		}
		else
			fouddel = 0;
		str++;
	}

	return (ptr);
}
