#include "hash_tables.h"
/**
 * hash_djb2 - A fun. implementing the djb2 algorithm.
 * @str: astring
 * Return: index
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int index;
	int c;

	index = 5381;
	while ((c = *str++))
	{
		index = ((index << 5) + index) + c;
	}
	return (index);
}
