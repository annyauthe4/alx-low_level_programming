#include "main.h"

/**
  * _strlen - Count the number of char in a string
  * @str: Pointer to a string
  * Return: char count.
  */
size_t _strlen(char *str)
{
	size_t count;

	count = 0;
	if (str == NULL)
		return (count);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
/**
  * create_file - Creates file
  * @filename: The name of the file to create
  * @text_content: Text to write to the file
  * Return: 1 on success, -1 on failure.
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t count;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	count = _strlen(text_content);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	bytes_written = write(fd, text_content, count);
	if (bytes_written == -1 || (size_t)bytes_written != count)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
