#include "main.h"
/**
 * _strlen - return the length of string
 *
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}
/**
 * create_file - create a file
 *
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 success
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t b = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (l)
		b = write(f, text_content, l);
	close(f);
	return (b == l ? 1 : -1);
}
