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
	int x = 48;
	int y = 44;

	while (x <= 56)
	{
		putchar(x);
		putchar(32);
		putchar(y);
		x++;
	}
	putchar(57);

	putchar('\n');
	return (0);
}
