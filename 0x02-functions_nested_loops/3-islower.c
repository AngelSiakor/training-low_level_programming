#include "main.h"

/**
 * _islower - looks for lowercase character
 * @c: Character to check
 *
 * Desscription: checks if the given character 'c' is a lowercase letter
 *
 *  Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
