#include <stdio.h>

char swap_case(char c)
{
	
	if(c >= 65 && c<= 90)
	{
		return( c + 32);
	}

	if(c >= 97 && c <= 122)
	{
		return(c - 32);
	}

	else
		return(c);
}


char swap_case(char c);
int main()
{
	printf("%c\n", swap_case('A'));
	printf("%c\n", swap_case('b'));
	printf("%c\n", swap_case('s'));
	printf("%c\n", swap_case('D'));
	printf("%c\n", swap_case('2'));

	return (0);
}


