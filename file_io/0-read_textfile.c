#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdw;
	char *temp;
	ssize_t bytes_read;
	size_t total_bytes_read = 0;

	if (filename == NULL)
		return (0);

	temp = (char *)malloc(letters * sizeof(char));
	if (temp == NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(temp);
		return (0);
	}

	while ((bytes_read = read(fdo, temp + total_bytes_read, letters - total_bytes_read)) > 0)
	{
		total_bytes_read += bytes_read;
		 if (total_bytes_read >= letters)
			 break;
	}

	fdw = write(STDOUT_FILENO, temp, total_bytes_read);
	free(temp);
	close(fdo);

	if (fdw == -1 || (size_t)fdw != total_bytes_read)
		return (0);

	return (fdw);
}
