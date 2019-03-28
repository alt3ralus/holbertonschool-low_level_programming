#include "holberton.h"
#include <math.h>
/**
 * binary_to_uint - a function that converts a binary to unsigned.
 * @b: pointer to char.
 * Return: unsigned int. Number converted.
 */





unsigned int _pow(unsigned int a, unsigned int b)
{
   unsigned int i, r = 1;

   for(i = 1; i <= b; ++i)
       r *= a;

   for(i = 0; i > b;  --i)
       r /= a;

   return r;
}


unsigned int binary_to_uint(const char *b)
{
	unsigned int count;
	unsigned int sum = 0;
        unsigned int var = 0;
	unsigned int tmp = 0;

	if (( *b != '0' && *b != '1') || b == NULL)
	{
		return (0);
	}
	else
	{
		for (count = 0; b[count] != '\0'; count++)
		{

			var = (int) b[count];
			var =  var - 48;
			printf("%i", var);
			tmp = _pow(2,count);

			printf("temp = %u\n", tmp);
			sum += var * tmp;

		} printf("\n");
		return (sum);
	}
}
