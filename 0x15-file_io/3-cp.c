#include "main.h"
/**
  * check97 - Checks if argc is exactly 3
  * @argc: Argument count
  * Return: void.
  */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, ARGC_ERROR);
		exit(97);
	}
}
/**
  * check_fd_from - Checks if file descriptor of file1 fail
  * @fd: fd of file1
  * @file_from: The file1 name
  * Return: void
  */
void check_fd_from(int fd, char *file_from)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, file_from);
		exit(98);
	}
}
/**
  * check_fd_to - Checks the return of fd_to
  * @fd: fd for the file to copy to
  * @file_to: Pointer to file2
  * Return: void
  */
void check_fd_to(int fd, char *file_to)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, WRITE_ERROR, file_to);
		close(fd);
		exit(99);
	}
}
/**
  * check_bytes_read - Check for bytes read failure
  * @bytes_read: The number of bytes read.
  * @str: Pointer to source file.
  * @fd_from: File descriptor of source file.
  * @fd_to: File descriptor of destination file.
  * Return: void
  */
void check_bytes_read(ssize_t bytes_read, char *str, int fd_from, int fd_to)
{
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, str);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}
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

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check_fd_from(fd_from, argv[1]);
	old_umask = umask(0);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	umask(old_umask);
	check_fd_to(fd_to, argv[2]);
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
	check_bytes_read(bytes_read, argv[1], fd_from, fd_to);
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
