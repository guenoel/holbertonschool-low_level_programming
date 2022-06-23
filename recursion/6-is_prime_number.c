#include "main.h"
#include <stdio.h>

/**
 * prime - savoir si n-- est diviseur
 * @n: chiffre a tester
 * @i: autre chiffre
 *
 * Return: 1 si oui 0 si non
 */

int prime(int n, int i)
{
	if (i == 1)/*i = n-1 donc i=1 correspond a n=2 qui est premier*/ 
		return (1);
	if (n % i == 0 && i > 0)/*divisible par autre ? (jusque 0)*/
		/*si oui pas premier*/
		return (0);
	return (prime(n, (i - 1)));/* si les 2 conditions preced*/
	/*non remplies i = 1 return 1*/
}

/**
 * is_prime_number - est ce un chiffre premier ?
 * @n: chiffre a tester
 *
 * Return: 1 si oui 0 si non
 */

int is_prime_number(int n)
{
	if (n <= 1) /* 1 n'est pas premier: on exclus*/
	return (0);
	return (prime(n, n - 1));
}
