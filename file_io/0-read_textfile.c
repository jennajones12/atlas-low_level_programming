#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 * Return: If successful, the number of letters read and printed
 * otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdw;
	char *temp;
	ssize_t bytes_read;
	size_t total_bytes_read = 0;

	if (filename == NULL)
		return (0);

	temp = malloc(letters * sizeof(char));
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

	if (bytes_read == -1)
	{
		free(temp);
		close(fdo);
		return (0);
	}

	fdw = write(STDOUT_FILENO, temp, total_bytes_read);
	free(temp);
	close(fdo);

	if (fdw == -1 || (size_t)fdw != total_bytes_read)
		return (0);

	return (fdw);
}
