#include "main.h"

/**
 * read_textfile - read a file to STDOUT
 * @filename: name of file to print
 * @letters: number of letters to read
 * Return: number of charaters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, w, r;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(letters * sizeof(*buf));
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);
	if (w != r)
	{
		free(buf);
		return (0);
	}

	close(fd);
	return (w);
}
