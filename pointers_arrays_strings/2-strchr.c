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
char *ptr;

ptr = 0;
for (i = 0; s[i] != '\0'; i++)
	if (s[i] == c)
	{
	ptr = &s[i];
	break;
	}
return (ptr);
}
