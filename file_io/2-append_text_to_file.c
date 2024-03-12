#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) != 0)
		return (-1);

	if (text_content == NULL)
		return (1);
	 
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	bytes_written = write(fd, text_content, len);
	close(fd);

	if (bytes_written == -1)
		return (-1);

	return (1);
}
