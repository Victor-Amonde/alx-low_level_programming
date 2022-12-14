#include "main.h"

/**
 *append_text_to_file - appends content at the end of a file
 *@filename:file name
 *@text_content:text to append
 *Return:1- success,-1 - failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i]; i++)
		;
	if (i == 0)
	{
		close(fd);
		return (1);
	}
	if (write(fd, text_content, i) == -1)
	{
		return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
