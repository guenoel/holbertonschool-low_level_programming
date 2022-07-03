#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - fonction
 * @ptr: variable
 * @oldsize: variable
 * @newsize: variable
 *
 * Return: rien
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr2;

	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
			return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free (ptr);
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size != old_size)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
		{
			free (ptr);
			free (ptr2);
			return NULL;
		}
/*		for (i = 0; i < old_size; i++)
			ptr2[i] = ptr[i];*/
		strcpy(ptr2, ptr);
	}
		return (ptr2);
}
