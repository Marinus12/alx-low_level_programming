#include "variadic_functions.h"

/**
  * print_all - function that prints anything
  * @format: list of types of arguments
  */
void print_all(const char * const format, ...)
{
	int first = 1;
	char c, *str;

	va_list list;

	va_start(list, format);

	while (format && format[first - 1])
	{
		c = format[first - 1];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(list, double));
				break;
			case 's':
				{
					str = va_arg(list, char *);
					if (str == NULL)
						printf("(nil)");
					else
						printf("%s", str);
				}
				break;
		}

		if ((c == 'c' || c == 'i' || c == 'f' || c == 's') && format[first])
		{
			printf(", ");
		}

		first++;
	}

	printf("\n");
	va_end(list);
}
