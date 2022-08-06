#include "main.h"
#include <stdarg.h>

int print_decimal(int value);

/**
  * _printf - produces output according to a format
  * @format: format string containing the characters and the specifiers
  * Return: length of the formatted output string
  */
int _printf(const char *format, ...)
{
	int count = 0, i; /* Count the number of characters printed */
	va_list data; /* Creating a variable argument list */

	va_start(data, format); /* Initializing our arg list*/

	for (i = 0; format[i] != '\0';)

		if (format[i] != '%')
		{
			count += _putchar(format[i]); /* Print the char and store it in count var*/
			i++;
		} else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
				{
					case 'c':
						count += _putchar(va_arg(data, int));
						break;
					case 's':
						count += print_string(va_arg(data, char *));
						break;
					case '%':
						count += _putchar('%'); /* Prints the % char */
					break;
					case 'd':
						count += print_decimal(va_arg(data, int));
					break;
					case 'i':
						count += print_decimal(va_arg(data, int));
					break;
					default:
					break;

				}
				i += 2;
		}
	return (count);
}
