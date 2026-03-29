#include "main.h"

/**
 * append_text_to_file - append text to existing file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int res, len, fd;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	for (len = 0; text_content[len];)
		len++;
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	res = write(fd, text_content, len);
	if (res == -1)
		return (-1);
	return (1);
}
