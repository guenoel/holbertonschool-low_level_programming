#include <stdio.h>

/**
* main - Fonction principale simple juste pour afficher
* mais avec printf cette fois
*
* c'est tellement simple que y a pas grand chose a dire de plus
* Return: rien du tout !
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("the size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("the size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("the size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("the size of a long long int: %lu byte(s)\n"
			, (unsigned long)sizeof(d));
	printf("the size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
