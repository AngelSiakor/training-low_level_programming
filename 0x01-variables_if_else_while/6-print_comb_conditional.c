#include <stdio.h>
 int main(){
	 int ch= 48;
	 while( ch <= 57)
	 {
		 if (ch == 51 || ch == 52)
         {
	        ch++;
	        continue;

	 }
            if(ch > 48)
	    {
		 putchar(',');
	         putchar(' ');
	 }
	      putchar(ch);
               ch++;
	 }
             putchar('\n');
	     return 0;
 }
