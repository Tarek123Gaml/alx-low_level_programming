#include "main.h"

/***/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = 0;
	while(*text_content++)
		len++;


