#include "main.h"

/**
 * main - Entry point
 *Description: print_alphabet_x10 'prints 10 times the alphabets, in lowercase'followed by a new line.
 *
 * Return: Always 0
 */

void print_alphabets_x10(void)

{
	char ch;
	int i

	i = 0;

	while (i < 10)

	{
		ch = 'a';
		while (ch <= 'z')
                {
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
