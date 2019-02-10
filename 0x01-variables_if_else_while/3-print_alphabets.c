#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry block
 * @void: sto cazzo
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int x = 97;
	int y = 65;

	while (x < 123)
	{
		putchar(x);
		x++;
	}
	while (y < 91)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
