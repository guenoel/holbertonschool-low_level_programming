#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- fonction principale
 * @argc: nb arguments
 * @argv: array d arguments
 *
 * Return: 0 si tout va bien
 */


int main(int argc, char *argv[])
{
	int i, j, a, b;

	a = 0;
	if (argc != 1)
	{
		for (i = argc; i > 1; i--)
		{
			char *str = argv[i - 1];

			for (j = 0; str[j] != '\0'; j++)
			{
			if (!(isdigit(str[j])))
			{
				printf("Error\n");
				return (1);
			}
			}
			b = strtol(argv[i - 1], NULL, 10);
			a = a + b;
		}
	}
	printf("%d\n", a);
	return (0);
}
