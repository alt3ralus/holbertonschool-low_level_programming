#include "holberton.h"
/**
 * main - A main function
 * @argc: int type.
 * @argv: char type.
 * Return: int.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int x;
		char *str = argv[0];

		for (x = 0; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
	return (0);
}
