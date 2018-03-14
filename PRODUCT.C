#include <stdio.h>
int main()
{
    int num,m =10,n=50;
    printf("Print Odd Numbers in a given range m to n:\n");
    for (num = m; num <= n; num++)
        {
               if (num % 2 == 1)
                  printf ("%d ", num);
         }
            return 0;
}
