#include "main.h"

/**
 *  _isalpha - checks whether a character is an alphabet letter
 *  @c: character to check
 *
 *  Description: checks if 'c' is a letter lower or uppercase.
 *
 *  Return: 1 if 'c' is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
