#include "holberton.h"
/**
 * create_file - a fun. that crates a text file.
 * @filename: pointer to the file.
 * @text_content: The size of the letter to print.
 * Return: thr amount of chars to print.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int esc, count = 0;

	if (filename == NULL)
		return (-1);


	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[count] != '\0')
	{
		count++;
	}

	esc = write(file, text_content, count);

	if (file == -1 || esc == -1)
	{
		return (-1);
	}

	close(file);

	return (1);

}
