#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int safe_close(int);
/**
 *
 */

int main(int argc, char *argv[])
{
	int main(int argc, char *argv[])
	char buffer[1024];
	int bytes_read = 0, from_fd = -1, to_fd = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	 if (from_fd < 0)
	 {
		 dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		 exit(98);
	 }

	 to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	 if (to_fd < 0)
	 {
		 dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		 safe_close(from_fd);
		 exit(99);
	 }

	 while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	 {
		 error = write(to_fd, buffer, bytes_read);
		 if (error < 0)
		 {
			 dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			 safe_close(from_fd);
			 safe_close(to_fd);
			 exit(99);
		 }
	 }

	 if (bytes_read < 0)
	 {
		 dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		 safe_close(from_fd);
		 safe_close(to_fd);
		 exit(98);
	 }

	 error = safe_close(from_fd);
	 if (error < 0)
		 exit(100);

	 return (0);

/**
 * safe_close - A function that closes a file and prints error when closed file
 * @description: Description error for closed file
 * Return: 1 on success, -1 on failure
 */

int safe_close(int description)
{
	int error;

	error = close(description);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);

	return (error);
}
