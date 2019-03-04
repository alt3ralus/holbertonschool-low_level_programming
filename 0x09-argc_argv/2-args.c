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
		int x, y;

		for (y = 0; argv[y] != '\0'; y++)
		{
			char *str = argv[y];

			for (x = 0; str[x] != '\0'; x++)
			{
				_putchar(str[x]);
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
	return (0);
}
