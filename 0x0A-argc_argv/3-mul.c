#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  * main - prints Multiplies two numbers
  * @argc:  Counts arguments
  * @argv: Arguments vector
  * Return: 0 if works,1 if there's ERROR
  */
int main(int argc char *argv[])
{
	int n, m, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	diff - n % m;

	printf("%i\n", diff);

	return (0);
}
