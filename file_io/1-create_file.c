#include "main.h"

/**
 * create_file - function
 * @filename: fichier texte
 * @text_content: nombre de lettre a afficher
 *
 * Return: nombre de lettre rellement affichées
 */

int create_file(const char *filename, char *text_content)
{
	int i, fd;

	if (filename == NULL)
		return (0);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	if (text_content == NULL)
		i = 0;
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	write(fd, text_content, i);

	close(fd);
	return (1);
}
