#include <stdio.h>
  int main(){
	  int p = 0;
      
	 while (p < 10) {
             putchar('0' + p);

           if (p < 9) {

         putchar(',');
         putchar(' ');
   }     
       p++;

   }
    putchar('\n');	 
      return 0;
}

