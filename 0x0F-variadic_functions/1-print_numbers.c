#include "variadic_functions.h"

/**
 * print_numbers  - print digits.
 * @separator: A coma.
 * @n: constant var.
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list datos;
	va_start(datos, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(datos, int));

		if (i != n -1)
			printf("%s", separator);
	}
	putchar('\n');

}
