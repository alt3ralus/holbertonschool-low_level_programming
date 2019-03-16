#include "variadic_functions.h"

/**
 * print_strings - A function that prints several strings.
 * @separator: A string of chars.
 * @n: amount of strings.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list datos;

	va_start(datos, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
				printf("%s", va_arg(datos, char *));
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(datos);
}
