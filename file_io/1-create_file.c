#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1
 */
int create_file(const char *filename, char *text_content)
{
	int res, len, fd;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	for (len = 0; text_content[len];)
		len++;
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	res = write(fd, text_content, len);
	return (res);
}
