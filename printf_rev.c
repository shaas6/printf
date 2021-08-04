#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: string itself
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int extra = 0;

	j = _strlen(s) - 1;
	while (i < j)
	{
	extra = s[j];
	s[j] = s[i];
	s[i] = extra;
	i++;
	j--;
	}
}
