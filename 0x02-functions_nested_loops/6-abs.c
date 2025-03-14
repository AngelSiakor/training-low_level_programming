#include "main.h"

/**
 * _abs - the absolute value of an integer
 * @n: the integer
 *
 * Return: the absolute value of n.
 */
int _abs(int n)
{
	int abs_value;

	abs_value = n;

	if (abs_value < 0)
		abs_value = -abs_value;

	return (abs_value);
}
