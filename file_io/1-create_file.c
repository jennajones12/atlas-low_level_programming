#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		fdw = write(fdo, text_content, len);
		close(fdo);

		if (fdw < 0)
			return (-1);
	}
	else
	{
		close(fdo);
	}

	return (-1);
}
