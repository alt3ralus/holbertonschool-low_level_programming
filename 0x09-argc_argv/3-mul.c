#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A main function
 * @argc: int type.
 * @argv: char type.
 * Return: int.
 */
int main(int argc, char *argv[])
{

	if (argc  == 1)
	{
		char i[]= "Error";
		int x;

		for (x = 0; i[x] != '\0'; x++)
		{
			putchar(i[x]);
		}
		putchar('\n');
		return (1);
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d", a * b);
	}
	putchar('\n');
	return (0);
}
