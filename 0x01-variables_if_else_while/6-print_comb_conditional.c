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

		 putchar(ch);
	            putchar(',');
	 
	    	 ch++;
	 }


             putchar ('\n');
	     return 0;
 }
