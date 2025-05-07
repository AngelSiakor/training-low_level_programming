#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse an array of integers
 * @a: the array of integers
 * @n: the number of elements to swap
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int p;

	for (i = 0; i < n / 2; i++)
	{
		p = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = p;
	}

}
