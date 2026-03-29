#include "main.h"

/**
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

	w = write(1, buf, r);
	if (w != r)
	{
		free(buf);
		return (0);
	}

	close(fd);
	return (w);
}
