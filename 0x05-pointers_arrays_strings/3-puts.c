#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: that string that's being printed
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');

}
