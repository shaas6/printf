#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> /* variadic functions */
#include <unistd.h> /* system, read, write */

/**
 * struct format - struct for printf format
 * @c: holds function pointers
 * @f: holds function pointers
 */

typedef struct format
{
	char *c;
	int (*f)(va_list);
} format_t;

/* helpers */
int _putchar(char c);
int _strlen(char *s);
int printf_int(va_list arg);
char (*itoa(int num, char* str, int base));
char *_strcpy(char *dest, char *src);
/* char *printf_itoa(int num, char *dig_int); */
void rev_string(char *s);
int _strlen(char *s);

/* add print_num */
int _printf(const char *format, ...);
int (*find_function(char format))(va_list);

/* main functions */
int printf_c(va_list c);
int printf_percent(va_list p);
int printf_str(va_list arg);

#endif
