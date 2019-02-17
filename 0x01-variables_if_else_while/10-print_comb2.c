#include <stdio.h>

/**
 * main - entry block
 *
 * Return: Always 0 if succes
 */
int main()
{
	int x;
	int y = 0;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar ((x / 10) + '0');
			putchar ((y % 10) + '0');

			if (y < 99)
				putchar (',');
			putchar(' ');
		}
	}
	return 0;
}
