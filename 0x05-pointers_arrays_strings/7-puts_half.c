#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints have a srting
 *
 * @str: the string to check
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 5; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
