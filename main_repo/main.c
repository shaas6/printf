#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    /* MARK: Edge case */

    printf(NULL);
    _printf(NULL);

    printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');

    printf("css%ccs%scscscs", 'T', "Test");
    _printf("css%ccs%scscscs", 'T', "Test");

    _printf("%c", '\0');
    printf("%c", '\0');


    printf("%");
    _printf("%");

/* MARK: End of edge case */

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

	printf("%!\n");
	_printf("%!\n");

	printf("%K\n");
	_printf("%K\n");

	return (0);
}
