#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: number to be printed
  *
  * Return: Binary representation of a number
  */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < (int)(sizeof(unsigned long int) * 8); i++)
	{
		if ((n & mask) == 0 && flag == 0)
		{
			mask >>= 1;
		}
		else
		{
			_putchar((n & mask) ? '1' : '0');
			flag = 1;
			mask >>= 1;
		}
	}
}
