#include "main.h"

/**
 * print_last_digit - checks for the last digit
 * @n: the integer to check
 *
 * Return: return the last digit
 */

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (lastd < 0)
	{
		lastd = -lastd;
	}
		_putchar(lastd + '0');

	return (lastd);
}

