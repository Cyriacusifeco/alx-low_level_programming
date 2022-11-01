#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include "main.h"

/**
 * main - entry point of program.
 * Return: 1 on success.
 */

int main(void)
{
		int fd;


		fd = open("myfile", O_CREAT);
			if (fd == -1)
				return (0);



		close(fd);
return (1);
}
