#include "main.h"
/**
 * _strncpy - copies a string
 * @dest:The buffer storing the string.
 * @src: The source string.
 * @n: The amount of bytes from src.
 * Return: A pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
