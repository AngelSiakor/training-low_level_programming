#include <stdio.h>
int main() {  
int p = 48;
   char *even_odd;

   while(p <= 57) {
	   if (p % 2 == 0) {
		   even_odd = "Even";
	  }
           else{
	even_odd = "odd";
         }
	   putchar(p);
	   putchar(' ');

   while(*even_odd) {
           putchar(*even_odd);
            even_odd++;	  
   }
     putchar ('\n');
     p++;
   }
       return 0;
   }
