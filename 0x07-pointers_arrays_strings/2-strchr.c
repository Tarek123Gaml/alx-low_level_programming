#include "main.h"

/**
 * _strchr - return shar location
 *
 * @s: takes string
 * @c: takes char
 *
 * Return: c postion
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		if (s[itr] == c)
			return (s + itr);
	}

	return ('\0')
}
