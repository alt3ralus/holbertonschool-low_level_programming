#include "holberton.h"
/**
 * read_textfile - a fun. that reads a text file and prints i/o
 * @filename: pointer to the file.
 * @size_t: The size of the letter to print.
 * Return: thr amount of chars to print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int abr;
	int esc;
	int num_bytes;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	abr = open(filename, O_RDONLY);
	if (abr == -1)
		return (0);

	num_bytes = read(abr, buf, letters);
	if (num_bytes == -1)
		return (0);

	esc = write(STDOUT_FILENO, buf, num_bytes);

	if (esc == -1)
		return (0);

	return (num_bytes);

}
