#include<stdio.h>
int main()
{
int a,n,t,c=0;
printf("enter the number:\n");
scanf("%d",&a);
while(a!=0)
{
n=a%10;
c=(c*10)+n;
a=a/10;
}
printf("\n the odd numbers are");
while(c!=0)
{
t=c%10;
if(t%2!=0)
{
printf("\n %d\t",t);
}
c=c/10;
}return 0;
}
