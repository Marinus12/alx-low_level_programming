#include "lists.h"

/**
  * first_line - prints nefore the main function
  *
  * Return: line before main
  */
void first_line(void) __attribute__((constructor));
void first_line(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
