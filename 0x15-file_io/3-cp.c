#include "main.h"

/**
  * main - Program copies the content of a file into another file
  * @argc: Argument count
  * @argv: Argument vector
  * Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	int fd_to, fd_from;
	ssize_t bytes_written, bytes_read;
	char buffer[BUFFER_SIZE];
	mode_t old_umask;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, ARGC_ERROR);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]);
		exit(98);
	}
	old_umask = umask(0);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	umask(old_umask);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]);
		close(fd_to);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]);
		close(fd_from);
		close(fd_to);
		exit(99);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd_to);
		exit(100);
	}
	return (0);
}
