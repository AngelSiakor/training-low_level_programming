#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is appropriatly.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
