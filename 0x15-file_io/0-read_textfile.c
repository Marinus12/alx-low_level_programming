#include "main.h"

/**
  * read_textfile - function reads a text file and prints it to the POSIX
  * @filename: name of the file
  * @letters: number of letters to be read and printed
  *
  * Return: 0 if function fails or return error
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reads, written;
	int descriptor;
	char *buffer;

	if (filename == NULL)
		return (0);

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(descriptor);
		return (0);
	}

	reads = read(descriptor, buffer, letters);
	if (reads == -1)
	{
		close(descriptor);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, reads);
	if (written == -1 || written != reads)
	{
		free(buffer);
		return (0);
	}
	close(descriptor);
	free(buffer);

	return (written);
}
