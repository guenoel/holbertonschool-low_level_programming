#include "main.h"
#include <stdio.h>

/**
 * *_print_rev_recursion - recursion
 * @s: string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
if (s[0] != '\0')
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
else
_putchar('\n');
}
