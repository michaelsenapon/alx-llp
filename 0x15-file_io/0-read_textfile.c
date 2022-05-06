#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 *
 * Return: 0 or number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = (char *)malloc(sizeof(char) * 10000);

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);
	if (fd < 0)
		return (0);

	read("filename", buffer, letters);
}
