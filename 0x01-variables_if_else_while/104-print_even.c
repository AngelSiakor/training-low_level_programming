#include <stdio.h>


int main()
{
	int a = 1;

	while(a <= 100)
	{	
		if (a % 2 == 0)
		{
		       	if (a >= 10 && a <= 99)
			{
				int first = a / 10;
				int last = a % 10;
				putchar(first + 48);
				putchar(last + 48);
			}
			else if (a < 10)
				putchar(a + 48);
			else 
			{
				putchar((a / 100) + 48);
				putchar(((a / 10) % 10) + 48);
				putchar((a % 10) + 48);
			}

			if (a < 100)
			{
				putchar(' ');
				putchar(',');
			}

				
		}
		a++;
	}
		putchar('\n');
		return (0);
}

