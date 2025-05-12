#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * @a - the string
 *@size- the number of rows/columns
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1= 0;
	int sum2= 0;
	

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i *size + i];	
		sum2 = sum2 + a[i *size +(size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);

}


	
