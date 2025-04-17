#include <stdio.h>


int main()
{
	int p= 1;
	
	while(p <= 99)
	{
		if (p % 3 == 0)
		{
			if (p >= 10)
			{
				int first = p / 10;
				int last = p % 10;
				putchar(first + 48);
				putchar(last + 48);
			}
			else 
				
				putchar(p + 48);
				
			if(p < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		p++;
	}
		
	putchar('\n');
	return(0);
}
	
