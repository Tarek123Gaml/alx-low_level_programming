#include <unistd.h>
#include "main.h"

/**
 * Description: _putchar - erite the character c
 *
 * Return: on seccess 1.
 * on error, -1.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
