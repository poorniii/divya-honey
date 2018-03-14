# include<stdio.h>
int getSum(int n)
{ 
   int sum = 0;
   while (n != 0)
   {
       sum = sum + n % 5;
       n = n/5;
   }
   return sum;
}
int main()
{
  int n = 100;
  printf(" %d ", getSum(n));
  return 0;
}
