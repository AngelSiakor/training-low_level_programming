#include <stdio.h>

int main (void)
{
	int ch = 48;
	int a = 97;

	while(ch <= 57)
{
	putchar(ch);
	ch++;
}
	while(a <= 102)
{
	putchar(a);
	a++;
}
	putchar('\n');

	return (0);
}
