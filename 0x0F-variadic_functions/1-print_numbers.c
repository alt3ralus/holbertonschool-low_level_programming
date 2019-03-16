``#include "variadic_functions.h"

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
	int digito = 0;

	va_start(datos, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			{
				digito = va_arg(datos, int);
				printf("%d", digito);

				if (i < n - 1)
					printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(datos);
}
