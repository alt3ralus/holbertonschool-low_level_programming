#include "holberton.h"

/**
 * jack_bauer - jack's clock
 *
 * Return:  integer.
 */

int jack_bauer(void)
{
	int counta = 48;
	int countb = 48;
	int countc = 48;
	int countd = 48;

	for ( ; counta < 51; counta++)
	{
		for (countb = 48; countb < 52; countb++)
		{
			for ( ; countc < 54; countc++)
			{
				for ( ; countd < 58; countd++)
				{
					_putchar(counta);
					_putchar(countb);
					_putchar(':');
					_putchar(countc);
					_putchar(countd);
					_putchar('\n');
				}
				countd = 48;
			}
			countc = 48;
		}
		_putchar('\n');
	}
	return (0);
}
