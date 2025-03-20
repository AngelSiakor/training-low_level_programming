#include "main.h"

/**
 * print_alphabet_x10- prints lowercase alphabet
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i < 10)
	{
		a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
	i++;
	}
}

