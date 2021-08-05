#include "holberton.h"

/**
 * printf_int - Print integers; both decimal and whole
 * @n: Number
 * @list: va_list
 * Return: Number
 */

int printf_int(va_list arg)
{
	int n = va_arg(arg, int);
	int base = 10;
	int i;
	char *translation;

	/* Variable that stores printable nums, which are strings */
	/* Do this functionality without printf_str */
	/* Redundant because it's already in print_str */
	/* Recommend puts OR putchar */
	/* putchar itoa variable as a string */
	/* malloc 12 chars */

	translation = malloc(sizeof(char) * 12);
	_strcpy(translation, itoa(n, translation, base));

	for (i = 0; i < '\0'; i++)
	{
		_putchar(translation[i]);
	}
	free(translation);
	return (1);
}
