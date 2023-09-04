#include "main.h"

/**
 * append_text_to_file - append text to file
 *
 * @filename: file name inputs
 * @text_content: text appended
 *
 * Return: 1 or -1 in error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int appendf, len, stat;

	if (filename == NULL)
		return (-1);
	appendf = open(filename, O_WRONLY | O_APPEND);
	if (appendf == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len]; len++)
		;
	stat = write(appendf, text_content, len);
	close(appendf);
	return (stat == -1 ? -1 : 1);
}

