#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include "main.h"

/**
 * append_text_to_file - A function that appends to file.
 * @filename: File to be created.
 * @text_content: content to be appended.
 * Return: 1 on success.
 */

int append_text_to_file(const char *filename, char *text_content)
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
