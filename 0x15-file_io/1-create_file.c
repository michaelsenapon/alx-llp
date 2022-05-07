#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: content to be written into file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	len = strlen(text_content);
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, len);

	close(fd);
	return (1);
}
