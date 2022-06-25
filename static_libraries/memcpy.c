#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - prints buffer in hexa
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: numbers of bytes
 *
 * Return: something
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	dest[i] = src[i];
return (dest);
}
