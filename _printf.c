#include "holberton.h"

/**
 * find_function - matches the correct print function to use
 * @format: specific character
 * Return: function, null no match
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
 * _printf - prints whatever we want, MUAHAHAHA
 * @format: format argument
 * Return: count
 */

int _printf(const char *format, ...)
{
	int x;
	int count = 0;
	int (*func)(va_list);
	va_list arg;

	if (!format)
		return (-1);

	va_start(arg, format);

	for (x = 0; format[x] != '\0'; x++) /* go through the string */
	{
		if (format[x] == '%') /* until you find a % */
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
		}
		else
		{
			_putchar(format[x]); /* print string */
			count++;
		}
	}
	va_end(arg);
	return (count);
}

