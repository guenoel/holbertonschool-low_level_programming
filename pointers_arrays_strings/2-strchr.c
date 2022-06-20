#include "main.h"
#include <stdio.h>

/**
 * *_strchr - prints buffer in hexa
 * @s: string to search to
 * @c: character to find
 *
 * Return: something
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
		if (s[i + 1] == '\0')
			return (&s[i + 1]);
	return (NULL);
}
