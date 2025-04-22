#include <stdio.h>

int main()
{
	int a= 1;

	while(a <= 99)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			if (a >= 10)
			{
				int first = a /10;
				int last = a % 10;
				putchar(first + 48);
				putchar(last + 48);
			}
			else
				putchar( a + 48);

			if(a < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return(0);
}

