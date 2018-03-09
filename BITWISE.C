#include <stdio.h>
int main() 
{	
    int e = 300;
    int s = 38;
    printf(" value of e=%d s=%d before swapping", e, s);
    e = e ^ s;
    s = e ^ s;
    e = e ^ s;
    printf("value of e=%d s=%d after swapping", e, s);
    return 0;
}
