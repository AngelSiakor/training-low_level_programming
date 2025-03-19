#include <stdio.h>

int main (void)
{
	char a = 48;

	while (a <= 57)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(',');
			putchar(' ');
		}

		a++;
	}

	putchar('$');
	putchar('\n');

	return (0);
}
