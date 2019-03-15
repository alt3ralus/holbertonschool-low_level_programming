#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - principal
 * @argc - numero de argumentos
 * @argv - valores
 * Return: 0 if't ok.
 */

int  main(int argc, char *argv)
{

	if (argc != 2)
	{
		printf("Error \n");
      		exit(1);
	}

	if (argv < 0)
	{

		printf("Error\n");
		exit(2)
	}

	return (0);
}
