#include "variadic_functions.h"

/**
 * sum_them_all - sum any amount of numbers as argument.
 * @n: constant var.
 * Return: An int. The sum result.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	va_list datos;
	unsigned int suma = 0;

	va_start(datos, n);

	if (n == 0)
	{
		return (0);

	}
	for (i = 0; i < n; i++)
	{
		suma += va_arg(datos, unsigned int);
	}
	va_end(datos);
	return (suma);
}
