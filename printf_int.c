#include "holberton.h"

/**
 * printf_int - Print integers; both decimal and whole
 * @n: Number
 * Return: Number
 */

int printf_int(va_list arg)
{
	int n = va_arg(arg, int);

   if (n < 0)
   {
       _putchar('-');
       n = -n;
   }

   if (n == 0)
      _putchar('0');

   if (n >= 10)
   {
	   _putchar(n%10 + '0');
   }
   return (0);
}
