#include "main.h"

/**
  * append_text_to_file - Appends text to file.
  * @filename: The file to append to.
  * @text_content: The text to apppend.
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte_w;
	size_t word_count;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}
	word_count = _strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	byte_w = write(fd, text_content, word_count);
	if (byte_w == -1 || (size_t)byte_w != word_count)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
