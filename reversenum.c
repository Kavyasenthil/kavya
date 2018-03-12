#include<stdio.h>
int main()
{
    int a,t,rev;
    printf("\n enter the num");
    scanf("%d",&a);
    while(a!=0)
    {
        t=a%10;
        rev=rev*10+t;
        a/=10;
    }printf("\n the reversed number is %d",rev);
return 0;
}    
