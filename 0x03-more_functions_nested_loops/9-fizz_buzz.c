#include <stdio.h>

/**
 * main  - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = 1;

	while (x < 101)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((x % 5) == 0)
			printf("Buzz ");
		else
		{
			printf("%d ", x);
		}
		x++;
	}
	printf("\n");
	return (0);
}
