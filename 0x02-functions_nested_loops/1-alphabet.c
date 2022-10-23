#include "main.h"

/**
 * Description: print_alphabet prints the alpha in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char la;
	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}

