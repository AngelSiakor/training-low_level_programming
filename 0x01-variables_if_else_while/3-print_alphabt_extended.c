#include <stdio.h>
 int main(){
	 int a = 97;
	 int p = 0;
	 char str[] = "Letters skipped: 2" ;
	 while(a <= 122)
	 {
           if (a == 101 || a== 113)
	   {
              a++;
               continue;
         }
         putchar(a);
          a++;
    }
       putchar('\n');
         for(; str[p] != '\0' ;p++){
             putchar(str[p]);;
	 }
	 putchar('\n');
           return 0;
 }

