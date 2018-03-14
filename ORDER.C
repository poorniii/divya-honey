include <stdio.h>
int main()
{ 
int a,b,c,d; 
int ar[10]; 
a=0;b=0; 
printf("Enter any number"); 
scanf("%d",&n);
while(n) 
    {  
        c=n%10;
        d=n/10;
        k++;
    }
 for(i=0;n!=0&&i<k; i++,n=n%10) 
 {
     r=n%10;
     ar[i]=r;
 }  
 for(i=0;i<k;i++)
 { printf(" %d",ar[i]);
 }   
     printf("The number of digit in the following no is%d",k);
return 0;
}
