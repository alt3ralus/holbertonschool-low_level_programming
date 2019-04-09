#include <stdio.h>
/**
 * main - print comb of two digits.
 * Return: cero if success.
 */
int main(void)
{
	int x = 48, y = 48;


	while (x < 58)
	{
		for  ( ; y < 58; y++)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);
				putchar(',');
				putchar(' ');
			}
		}
		y = x + 1;
		x++;
		putchar('\n');
	}
	return (0);
}
