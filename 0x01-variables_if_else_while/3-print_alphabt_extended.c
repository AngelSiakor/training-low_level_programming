#include <stdio.h>
 int main(){
	 int a =   97;
	 char  *s = "Letters skipped: 2\n";
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
       putchar(*s);
        return 0;
 }

