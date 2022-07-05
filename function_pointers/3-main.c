#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Fonction principale
 *
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero si tout va bien
 */

int main(int argc, char **argv)
{
	int a, b, c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (!((strcmp(argv[2], "+") == 0) ||
				(strcmp(argv[2], "-") == 0) ||
				(strcmp(argv[2], "*") == 0) ||
				(strcmp(argv[2], "/") == 0) ||
				(strcmp(argv[2], "%") == 0)))
	{
		printf("Error\n");
		exit(99);
	}


	if (b == 0 && ((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0)))
	{
		printf("Error\n");
		exit(100);
	}

	c = get_op_func(argv[2])(a, b);
	printf("%d\n", c);
	return (0);
}
