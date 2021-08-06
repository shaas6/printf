#include "holberton.h"

/**
 * itoa - changes int to string
 * @num: number
 * @str: string
 * @base: BASS
 * Return: string
 */
char *itoa(int num, char *str, int base)
{
	int i = 0;
	int isNegative;

	/* Handle 0 explicitly, otherwise empty string will be printed for 0 */
	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	/* In standard itoa(), negative numbers are handled only with*/
	/* base 10. Otherwise numbers are considered unsigned.*/
	if (num < 0 && base == 10)
	{
		isNegative = 1;
		num = -num;
	}

	/* Process individual digits */
	while (num != 0)
	{
		int rem = num % base;

		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';

		num = num / base;
	}

	/* If number is negative, append '-' */
	if (isNegative)
		str[i++] = '-';

	str[i] = '\0'; /* Append string terminator */

	/* Reverse the string */
	rev_string(str);

	return (str);
}
