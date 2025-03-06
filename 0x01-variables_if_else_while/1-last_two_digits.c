#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

int main(void)
{
	int n;
        int last_digit;
	int second_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
         last_digit= n % 10;
	 second_digit= n % 100;
	 printf("Last two digits of %d are %d %d \n" , n, second_digit, last_digit);
         
	 
	return (0);
}
