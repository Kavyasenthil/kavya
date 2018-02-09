#include<stdio.h>
void main()
{
int a;
    printf("\n enter the number");
    scanf("%d",&a);
    while(a%10!=0)
    {
        a++;
    }
printf("\n the nearest greater multiple of 10 is %d",a);
}
