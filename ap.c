#include<stdio.h>
int main()
{
int a,d,n,sum=0,i;
printf("\n enter no. of terms & first term & difference");
scanf("%d %d %d",&n,&a,&d);
printf("\n arithmetic progression is");
for(i=0;i<n;i++)
{
sum+=a;
a=a+d;
}
printf("\t %d",sum);
return 0;
}
