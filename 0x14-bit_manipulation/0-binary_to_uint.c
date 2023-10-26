#include "main.h"

/**
  * binary_to_uint - converts binary to an unsigned int
  * @b: binary to be converted
  *
  * Return: the converted number, or 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			bin = (bin << 1);
		else if (b[i] == '1')
			bin = (bin << 1) | 1;
		else
			return (0);
	}
	return (bin);
}
