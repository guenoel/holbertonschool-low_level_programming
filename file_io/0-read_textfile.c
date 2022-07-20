#include "main.h"

/**
 * read_textfile - function
 * @filename: fichier texte
 * @letters: nombre de lettre a afficher
 *
 * Return: nombre de lettre rellement affichées
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, cpy, cnt;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	cpy = read(fd, buf, letters);

	close(fd);

	cnt = write(STDOUT_FILENO, buf, cpy);

	return (cnt);
}
