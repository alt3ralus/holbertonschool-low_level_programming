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
	char *cadenaP;

	va_start(datos, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{

			cadenaP = va_arg(datos, char *);

			if (cadenaP == NULL)
			{
				printf("%p", cadenaP);

			}
			else
			{
				printf("%s", cadenaP);
			}

			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(datos);
}
