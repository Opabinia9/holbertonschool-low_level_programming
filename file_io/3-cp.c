#include "main.h"

/**
 * main - cp file_from to file_to
 * @argc: number of args passed
 * @argv: list of args
 * Return: 0 on success else error code
 */
int main(int argc, char **argv)
{
	int file_from, file_to, byte_read, buf_size = 1024;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	buf = malloc(buf_size * sizeof(*buf));
	while ((byte_read = read(file_from, buf, buf_size)) > 0)
	{
		write(file_to, buf, byte_read);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		free(buf);
		return (100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		free(buf);
		return (100);
	}
	free(buf);
	return (0);
}
