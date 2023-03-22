#include "main.h"

/**
 * _islower- check if char is lowercase
 * @c: is the char to be checked
 * Return: if char is lowercase, or otherwise
 */
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
