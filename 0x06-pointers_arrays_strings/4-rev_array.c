#include <stdio.h>
#include "main.h"
#include <string.h>


void reverse_array(int *a, int n)
{
	int i;
	int p;

	for (i= 0; i < n / 2; i++)
	{
		p = a[i];
		a[i] = a[n -1-i];
		a[n-1-i] = p;
	}

}
