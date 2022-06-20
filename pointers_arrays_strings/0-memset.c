#include "main.h"
#include <stdio.h>

/**
 * *_memset - prints buffer in hexa
 * @s: pointer to memory area
 * @b: data to write to memory
 * @n: numbers of bytes
 *
 * Return: something
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	s[i] = b;
return (s);
}
