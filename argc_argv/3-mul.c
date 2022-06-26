#include <stdio.h>
#include <stdlib.h>

/**
 * main- fonction principale
 * @argc: nb arguments
 * @argv: array d arguments
 *
 * Return: 0 si tout va bien
 */


int main(int argc, char *argv[])
{
	int i, j;
	
	printf("argc = %d\n", argc);
	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", (i * j));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
