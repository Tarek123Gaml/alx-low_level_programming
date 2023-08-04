#include "main.h"

/**
 * _isalpha - function that chick character is alphabet
 *
 * @c: chick inputs
 *
 * Return: returns 1 if 'c' is alphabt
 *		else always 0 (seccess)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
