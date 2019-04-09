#include <stdio.h>
/**
 * main - print comb of two digits.
 * Return: zero if success.
 */
#include <stdio.h>

int main(void)
{
	int x = 48, y = 48;


	while (x <= 57)
	{
		for  ( ; y <= 57; y++)
		{
			if (x != y && y < 58)
			{
				putchar(x);
				putchar(y);
				if (x < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		y = x + 1;
		x++;
	}
	putchar('\n');

	return (0);
}
