#include <stdio.h>
/**
* __attribute__ :
*/
void print_before (void) __attribute__ ((constructor));

void print_before (void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
