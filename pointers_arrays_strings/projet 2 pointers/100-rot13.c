#include <stdio.h>
#include "main.h"

/**
 * *rot13 - rot13 substitution
 * @ptr: pointeur vers l'array de char str
 *
 * Return: valeur du pointeur ptr (valeur de str)
 */
char *rot13(char *ptr)
{
	int a, b, i, j, k, l, m, tmp;

	i = 0;
	while (ptr[i] != '\0')
	{
		j = 'A';
		k = 'M';
		l = 'a';
		m = 'm';
		b = 1;
		a = 0;
		tmp = 0;
		while (a < 2)
		{
			if ((ptr[i] >= j && ptr[i] <= k) || (ptr[i] >= l && ptr[i] <= m))
			{
				printf("avant: %c\n", ptr[i]);
				tmp = ptr[i] + (b * 13);
				printf("b = %d\n", b);
				printf("apres:     %c\n", ptr[i]);
			}
			/*comment faire pour que la condition ne soit remplie que dans un seul des deux tour de boucle ?*/
			ptr[i] = tmp;
			j = j + 13;
			k = k + 13;
			l = l + 13;
			m = m + 13;
			b = (-1);
			a++;
		}
		i++;
	}
	return (ptr);
}
