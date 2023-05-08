#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fdf;
	ssize_t ww;
	ssize_t ttt;

	fdf = open(filename, O_RDONLY);
	if (fdf == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	ttt = read(fdf, buf, letters);
	ww = write(STDOUT_FILENO, buf, ttt);

	free(buf);
	close(fdf);
	return (ww);
}
