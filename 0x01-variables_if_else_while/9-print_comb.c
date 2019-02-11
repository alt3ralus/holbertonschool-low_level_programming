#include <stdio.h>

/**
 * main - entry block
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;
	int y = 44;
	int z = 32;

	while (x <= 57)
	{
		putchar(x);
		if( x < 57){
			putchar(y);
			putchar(z);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
