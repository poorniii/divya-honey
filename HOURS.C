#include<stdio.h>
#include<conio.h>
int main()
{
        int hour,minute0,minute1,total;
        printf("enter the hours:");
        if(scanf("%d",&hour)==0)
        {
                printf("the minute is:");
                if(scanf("%d",&minute)==0)
                {
                        minute1=hour*60;
                        total=minute1+minute;
                        printf(" total minutes=> %d",total);
                }
                else
                {
                        printf("error ,enter correct value");
                }
        }
        else
        {
                printf("Error,enter correct value");
                return 0;
        }
}
