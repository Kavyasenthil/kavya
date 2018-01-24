#include<stdio.h>
int main()
{
int h1,m1,h2,m2,h,m;
printf("enter the 2 time values in hours and min format");
scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
h=h1-h2;
m=m1-m2;
printf("%d:%d is the time value",h,m);
return(0);
}
