#include "main.h"

/**
 * add - Adds two integer
 * @a: first integer
 * @b: secomd integer
 *
 * Return: sum of a and b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * print_number -prints an integer
 * @n: the integer to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
