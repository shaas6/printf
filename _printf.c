#include "holberton.h"

/**
 * find_function - matches the correct print function to use
 * @format: specific character
 * Return: function, if no match return null
 */

int (*find_function(char format))(va_list)
{
	int i;

	format_t array[] = {
		{"c", printf_c}, {"%", printf_percent}, {"s", printf_str},
		{"i", printf_int}, {"d", printf_int}, {NULL, NULL}
	};

	for (i = 0; array[i].c != NULL; i++)
	{
		if (format == *array[i].c)
			return (array[i].f);
	}
	return (NULL);
}

/**
 * _printf - prints stuff
 * @format: format argument
 * Return: count
 */

int _printf(const char *format, ...)
{
	char option = '\n';
	int x;
	int count = 0;
	int (*func)(va_list);
	va_list arg;

	if (!format)
		return (-1);

	va_start(arg, format);

	for (x = 0; format[x] != '\0'; x++) /* goes through the string */
	{
		if (format[x] == '%' && format[x + 1] == '\0')
		{
			putchar('%');
		}
		else if (format[x] == '%') /* until it finds a % */
		{
			x++; /* move to next character */
			func = find_function(format[x]); /* match function */
			if (func == NULL) /* if func doesn't match */
			{
				_putchar('%');
				_putchar(format[x]);
				count += 2;
			}
			else
				count += func(arg);
		} /* option? */
		else if (format[x] == '%' && option)
		{
			_putchar('%');
			_putchar(10);
		}

		else
		{
			_putchar(format[x]); /* prints a string */
			count++;
		}
	}
	va_end(arg);
	return (count);
}
