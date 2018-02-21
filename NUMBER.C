#include<stdio.h>
#include<conio.h>
int main()
{
int low,high,i,flag;
printf("enter two numbers:");
scanf("%d %d",&low,&high);
printf("prime number between %d&%d are:",low,high);
while(low<high)
{
flag=0;
for(i=2;i<low/2;++i)
{
if(low %i==0)
{
flag=1;
break;
}
return 0;
}
