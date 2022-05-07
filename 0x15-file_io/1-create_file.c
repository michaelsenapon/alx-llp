#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: content to be written into file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	len = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	write(fd, text_content, len);
	close(fd);
	return (1);
}
