#include <stdio.h>

/**
 * main - print comb of three digits.
 * Return: zero if success.
 */

#include <stdio.h>

int main(void)
{
	int x = 48, y = 48, z;


	while (x <= 57)
	{
		for  ( ; y <= 57; y++)
		{
			for (; z <= 57; z++)
			{

				if (x != y && y < 58)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x < 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			z = y + 1;
		}
		y = x + 1;
		x++;
	}
	putchar('\n');

	return (0);
}
