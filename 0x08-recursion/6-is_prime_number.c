#include "main.h"


int check(int n, int i);

int is_prime_number(int n)
{
	if(n <= 1)
		return(0);
	return check(n, 2);
}



int check(int n, int i)
{
	if(i * i > n)
		return(1);
	if(n % i == 0)
		return(0);
	return check(n, i + 1);
}
