#include "main.h"

/**
  * create_file - creates a function that creates a file
  * @filename: name of file to be created
  * @text_content: a NULL terminated string to write to the file
  *
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int descriptor;
	ssize_t written;

	if (filename == NULL)
		return (-1);
	descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (descriptor == 1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(descriptor, text_content, strlen(text_content));
		if (written == -1)
		{
			close(descriptor);
			return (-1);
		}
	}
	close(descriptor);
	return (1);
}
