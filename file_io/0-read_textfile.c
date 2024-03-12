#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t bytes_read;
	ssize_t result = 0;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		if (fwrite(buffer, sizeof(char), bytes_read, stdout) == bytes_read)
			result = bytes_read;
	}

	fclose(file);
	free(buffer);
	return (result);
}
