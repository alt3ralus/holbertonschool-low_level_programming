#include "holberton.h"

int main (int argc, char *argv[])
{
	if (argc > 1)
	{
		int x;
		char *str = argv[1];

		for (x = 0; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
	return(0);
}
