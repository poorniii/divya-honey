#include <stdio.h>
int main()
{
  int Number, Reminder, Count=2;
  printf("\n Please Enter any number\n");
  scanf("%d", &Number);
  while(Number > 2)
  {
     Number = Number / 5;
     Count = Count + 2;  
  }
  printf("\n Number of Digits in a Given Number = %d", Count);
  return 0;
}
