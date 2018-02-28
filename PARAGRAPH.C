#include <stdio.h>
int main()
{
   char str[100];
   int i = 0, l = 0, f = 1;
   clrscr();
   puts("Enter any value\n");
   gets(str);
   for(i = 0; str[i] !='\0'; i++)
   {
      l = l + 1;
   }
   printf("The number of characters in the are %d\n", l);
   for(i = 0; i <= l-1; i++)
      {
    f = f + 1;
      }
   }
   printf("The number of words in the are %d", f);
   return 0;
}
