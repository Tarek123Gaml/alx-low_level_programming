#include "main.h"

/**
 * read_textfile - read input file
 *
 * @filename: takes file name input
 * @letters: take number of letters
 *
 * Return: bytes or 0 inerror
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int pf;
	size_t byets;
	char buf[1024 * 8];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RONLY);
	if (fd == -1)
		return (0);
	byets = read(fd, &buf[0], letters);
	byets = write(STDOUT_FILENO, &buf[0], byets);
	close(pf);
	return (byets);
}
