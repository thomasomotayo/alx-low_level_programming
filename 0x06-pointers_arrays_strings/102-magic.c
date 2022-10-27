#include <stdio.h>

/*
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

int main(void)
{
	int n;
	int c[5];
	int *p;
       
	c[2] = 1024;
	p = &n;

	*(p + 5) = 98;
       	printf("c[2] = %d\n", c[2]);
	return (0);
}
