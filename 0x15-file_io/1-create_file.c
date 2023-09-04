#include "main.h"

/**
 * create_file - function that creat file whith data
 *
 * @filename: file name to creat
 * @text_content: data insetr
 *
 * Return: 1 or -1 in error
 */

int create_file(const char *filename, char *text_content)
{
	int new_file, len, stat;

	if (filename == NULL)
		return (-1);

	new_file = open(filenam, O_WRONLY | O_CREAT | 0_TRUNC, S_IRUSR, S_IWUSR);
	if (new_file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(new_file);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	stat = write(new_file, text_contanet, len);
	if (close(new_file) == -1)
		return (-1);
	return (stat == -1 ? -1 : 1);
}
