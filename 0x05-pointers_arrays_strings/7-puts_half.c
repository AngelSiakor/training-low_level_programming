#include <stdio.h>
#include "main.h"
#include <string.h>
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
	int len = strlen(str);
	int half = len / 2;

	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
