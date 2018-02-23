#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
unsigned long long factorial=1;
printf("enter an integer:");
scanf("%d",&n);
if(n<0)
printf("error!factorial of a negative number doesn't exist");
else
{
for(i=1;i<n;++i)
{
factorial a=i;
}
printf("factorial of %d=%11u",n,factorial);
}
return 0;
}
