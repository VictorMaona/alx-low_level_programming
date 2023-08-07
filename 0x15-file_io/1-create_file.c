#include "main.h"

/**
 * create_file- write text content into file with specified filename.
 * @filename: memory area where data is kept of the file created.
 * @text_content: Fill the file with text by writing on it.
 * Return: show successful 1 if fails -1 not null-terminated 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
