#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - prints buffer in hexa
 * @s: string to search to
 * @accept: character acceptés
 *
 * Return: something
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, b;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0, b = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
				b++;
			}
		}
	}
	return (NULL);
}
