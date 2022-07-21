#include "main.h"

/**
 * append_text_to_file - function
 * @filename: fichier texte
 * @text_content: nombre de lettre a afficher
 *
 * Return: nombre de lettre rellement affichées
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(fd, text_content, i);
	}

	close(fd);

	return (1);
}
