#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of the file
  * @text_content: NULL terminating string to add at the end of the file
  *
  * Return: 1 on success, -1 o failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t written;
	int descriptor;

	if (filename == NULL)
		return (-1);

	descriptor = open(filename, O_WRONLY | O_APPEND);

	if (descriptor == -1)
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
