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

	while (x <= 57)
	{
		putchar(x);

		if( x < 57){
			putchar(y);
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
