#include <stdio.h>
#include "main.h"
/**
  * main - Print the number if arguments passed
  * @argc: Counts arguments
  * @argv: Arguments
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	(void) argv; /* Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
