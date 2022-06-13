#include <stdio.h>
/**
 * main - suite de nombres avec conditions
 *
 * exercice sur les fonctions et les boucles
 * Return: retourne un 0 ou un 1 si min ou maj
 */

int main(void)
{
	int c;

	for (c = 1; c <= 100 ; c++)
	{
		if ((c % 3 == 0) && (c % 5 == 0))
			printf("FizzBuzz ");
		else if (c % 5 == 0)
		{
			if (c == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if ((c % 3) == 0)
			printf("Fizz ");
		else
		{
			printf("%d ", c);
		}
	}
	printf("\n");
	return (0);
}
