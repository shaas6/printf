#include "holberton.h"

/**
 * _strcpy - copies a string to a new location
 * @src: string source
 * @dest: string destination
 * Return: string at dest
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
