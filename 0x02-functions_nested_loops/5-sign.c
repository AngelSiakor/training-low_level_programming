#include "main.h"

/**
 * print_sign - checks for positive or negative number
 * @n: the integer to check
 *
 * Return: return 1 if n > zero, return 0 if n is 0, return -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
