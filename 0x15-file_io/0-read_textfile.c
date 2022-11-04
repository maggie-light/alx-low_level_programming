#include "main.h"
/**
 * read_textfile - function that reads a text 
 * file and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @text_content: the content to be written
 *
 * Return: 1 or -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONGLY | O_TRUNIC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(fd, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}

