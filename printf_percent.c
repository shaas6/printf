#include "holberton.h"

/**
 * printf_percent - prints % sign
 * @arg: argument
 * Return: ONE
 */

int printf_percent(va_list __attribute__((unused)) arg)
{
	char x = '%';

	_putchar(x);

	return (1);
}
