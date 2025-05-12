#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * @a - the string
 *@size- the number of rows/columns
 *
 * Return: 
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1= 0;
	int sum2= 0;
	

	for (i = 0; i < size; i++)
	{
		sum1 = a[i *size + i];
		sum2 = a[i *size +(size - 1 - i)];
	}
	_putchar(a[sum1 + i]);
	_putchar(a[sum2 + i]);

}


	
