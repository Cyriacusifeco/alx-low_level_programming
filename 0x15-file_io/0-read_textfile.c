#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - read a txt file.
 * @filename: File to be read.
 * @letters: number of characters to be read.
 * Return: decimal value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
		char buff[81];

		if (filename == NULL)
			return (0);
		fd = open(filename, O_RDONLY);
			if (fd == -1)
				return (0);

		read(fd, buff, letters);
		close(fd);
return (0);
}
