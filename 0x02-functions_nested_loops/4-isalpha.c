#include "main.h"

/**
 * _isalpha - prints lower and uppercase letter
 * @c: the integer to check
 *
 * Return: return 1 if it's a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c < 'A' ||  c >= 'Z') && (c < 'a' || c > 'z'))
	{
		return (0);
	}

	else
	{
		return (1);
	}

		return (0);
}


