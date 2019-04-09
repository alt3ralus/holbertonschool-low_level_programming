#include <stdio.h>

/**
 * main - print comb of three digits.
 * Return: zero if success.
 */

int main(void)
{
	int x = 48, y = 48, z;

	while (x <= 57)
	{
		for  ( ; y <= 57; y++)
		{
			for (; z <= 57; z++)
			{
				if (x != y && y != z && z != x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					{
						if (x != 55 || y != 56 || z != 57)
						{
							putchar(',');
							putchar(' ');
						}
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
