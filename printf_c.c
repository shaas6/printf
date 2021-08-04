#include "holberton.h"

/**
 * printf_c - prints the relevant character
 */

int printf_c(va_list c)
{
	char character;

	character = va_arg(c, int);

	_putchar(character);

	return (0);
}
