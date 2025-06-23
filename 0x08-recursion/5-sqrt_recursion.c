#include "main.h"

int check(int n, int i);


int _sqrt_recursion(int n)
{
	if(n < 0)
		return(-1);
	return check(n, 0);
}


int check(int n, int i)
{
	if(i * i > n)
		return(-1);
	if(i * i == n)
		return(i);
	return check(n, i + 1);
}
