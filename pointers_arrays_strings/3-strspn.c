#include "main.h"
#include <stdio.h>

/**
 * *_strchr - prints buffer in hexa
 * @s: string to search to
 * @c: character to find
 *
 * Return: something
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a, b;

	a = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0, b = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				a++;
				b++;
			}
		}
		if (b == 0)
			break;
	}
	return (a);
}
