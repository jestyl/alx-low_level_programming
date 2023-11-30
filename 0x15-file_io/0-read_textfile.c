#include "main.h"

/**
 * read_textfile - reads text file and prints POSIX
 *
 * @filename: text to print
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed else returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, err, rd;
	char *buf;

	fd = err = rd = 0;
	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (!buf)
		return (0);
	rd = read(fd, buf, letters);
	if (rd < 0)
	{
		free(buf);
		return (0);
	}
	buf[letters] = '\0';
	err = write(STDOUT_FILENO, buf, rd);
	if (err <= 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (rd);
}
