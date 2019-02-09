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
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;
	if (v == 0)
	printf("ultimo digito es cero %d \n", v);
	if (v > 5)
	printf("mayor que cinco =  %d  \n", v);
	if (v < 6)
	printf("menor que 6 =  %d \n", v);
	return (0);
}
