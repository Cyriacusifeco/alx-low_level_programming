#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include "main.h"

/**
 * create_file - A function that creates files.
 * @filename: File to be created.
 * @text_content: content to be written..
 * Return: decimal value
 */

int create_file(const char *filename, char *text_content)
{
		int fd;
		int len = 0;

		while (text_content != NULL && text_content[len] != '\0')
			len++;

		if (filename == NULL)
			return (0);
		fd = open(filename, O_CREAT);
			if (fd == -1)
				return (0);

		if (write(fd, text_content, len) == -1)
			return (-1);

		close(fd);
return (1);
}
