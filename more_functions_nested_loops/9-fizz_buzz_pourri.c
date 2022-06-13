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
	int d;
	int u;

	for (c = 0; c <= 1 ; c++)
	{
		for (d = 0; d <= 9; d++)
		{
			for (u = 0; u <= 9; u++)
			{
				if ((c >= 1 && (d >= 1 || u >= 1)) || (((c == 0) && (d == 0) && (u == 0))))
					;
				else
				{
					if ((((c * 100) + (d * 10) + u) % 3 == 0) && (((c * 100) + (d * 10) + u) \
								% 5 == 0))
						printf("FizzBuzz ");
					else if (((c * 100) + (d * 10) + u) % 5 == 0)
					{
						if ((c == 1) && (d == 0) && (u == 0))
							printf("Buzz");
						else
							printf("Buzz ");
					}
					else if (((c * 100) + (d * 10) + u) % 3 == 0)
						printf("Fizz ");
					else
					{
						printf("%d ", ((c * 100) + (d * 10) + u));
					}
				}
			}
		}
	}
	printf("\n");
	return (0);
}
