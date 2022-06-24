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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
