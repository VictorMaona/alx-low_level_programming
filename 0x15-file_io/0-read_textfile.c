#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- contents line by line to STDOUT.
 * @filename: name of the file read to be opened included in string.
 * @letters: number of letters to be read.
 * Return: To end a function w- actual read and 0 when fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
