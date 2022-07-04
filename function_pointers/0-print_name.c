#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - fonction
 *
 * @name: pointer
 *
 * @f: pointer to function
 *
 * Return: rien du tout
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
