#include <stdio.h>
int main(){
	int a = 97;
	while(a <= 122)
	{
		if (a == 97 || a == 101 || a == 105 || a == 111 || a == 117)
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}

	 putchar('\n');
	 return 0;
}
