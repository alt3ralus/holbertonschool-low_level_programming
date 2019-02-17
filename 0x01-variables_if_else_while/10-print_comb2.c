#include <stdio.h>

/**
 * main - entry block
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y = 0;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar ((x / 10) + '0');
			putchar ((y % 10) + '0');
			putchar(' ');
		}
	}
	return (0);
}
