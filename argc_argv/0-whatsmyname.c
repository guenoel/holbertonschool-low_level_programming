#include <stdio.h>

/**
 * main- fonction principale
 * @argc: nb arguments
 * @argv: array d arguments
 *
 * Return: 0 si tout va bien
 */


int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%s\n", argv[1]);
	}
	else
		printf("%s\n", argv[0]);
	return (0);
}
