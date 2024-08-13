#include "main.h"

/**
  * read_textfile - Reads textfile and prints it
  * @filename: Pointer to a file.
  * @letters: number of letters read.
  * Return: The number of letters read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *ptr_buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr_buffer = malloc(sizeof(char) * letters);
	if (ptr_buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, ptr_buffer, letters);
	if (bytes_read == -1)
	{
		free(ptr_buffer);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, ptr_buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(ptr_buffer);
		close(fd);
		return (0);
	}
	free(ptr_buffer);
	close(fd);
	return (bytes_written);
}
