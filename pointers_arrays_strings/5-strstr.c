#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: substring to find
 * @needle: string where we search occurence
 *
 * Return: something
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, b, c;

	for (c = 0; needle[c] != '\0'; c++)
		;
	for (i = 0, b = 0, j = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			b++;
		}
		if (b == c)
		{
			if (c > 0)
			{
				c = c - 1;
			}
			return (&haystack[i - c]);
		}
	}
	return (NULL);
}
