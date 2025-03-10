#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
     if(rand() % 2 == 0) {
	     n = -n;
     }
     if (n > 0) {
	     printf("%d is positive", n);
     }
     else if (n < 0) {
	     printf("%d is negative", n);
     }
      else{
	      printf("%d is zero", n);
      }
      if (n % 2 == 0) {
	      printf(" and even\n");
      } 
      else {
	      printf(" and odd\n");
      }
	return (0);
}
