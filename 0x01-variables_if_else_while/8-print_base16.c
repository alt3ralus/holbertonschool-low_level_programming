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
	int x = 60;
	int y = 97;

	while (x < 72)
	{
		putchar(x);
		x++;
	}
	while (y < 103)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
