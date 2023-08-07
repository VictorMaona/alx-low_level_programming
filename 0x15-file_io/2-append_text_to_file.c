#include "main.h"

/**
 * append_text_to_file- contains the text content to the end of it.
 * @filename: a file with the specified file name.
 * @text_content: will be updated with text.
 *
 * Return: 1 if file is successfully opened and the text is inserted.
 *          -1 if there was a problem opening the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
