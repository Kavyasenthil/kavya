#include <stdio.h>

int main()
{
    int a,t,n=1;
    printf("\n enter the num");
    scanf("%d",&a);
    while(a!=0) 
    {
     t=a%10;
     n=n*t;
     a=a/10;
    }
    printf("product is %d",n);
    return 0;
}
