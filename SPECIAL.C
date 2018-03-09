#include<string.h>
int main()
{
    int  specialchars, i;
    specialchars = i = 0;
    printf("Enter any string : ");
    while(string[i]!='\0')
    {
        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
        else
        {
            specialchars++;
        }

        i++;
    }
    printf("Total Special characters : %d\n", specialchars);
    return 0;
}
