#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: pointer to a char
 * @f: pointer to a function.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)

	f(name);

}
