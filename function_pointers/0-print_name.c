#include <stdio.h>
#include <stdlib.h>

/**
 * Print_name - fonction
 *
 * @name: pointer
 *
 * f - pointer to function
 * 
 * Return: rien du tout
 */

void print_name(char *name, void (*f)(char *))
{
	print_name_uppercase(*name);
}
