#include "main.h"
#define BUFSIZE 1024

/**
  * error_exit - prints an error message and exits with a specified code
  * @code: exit code
  * @format: format string for the error message
  *
  * Return: ...
  */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}
