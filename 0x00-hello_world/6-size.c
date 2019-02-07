#include <stdio.h>
 /**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
char b;
float c;
long long int d;
long int e;
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu bytes(s)\n", sizeof(b));
printf("Size of a long int: %lu byte(s)\n", sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(e));
return (0);
}
