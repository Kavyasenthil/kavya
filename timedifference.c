#include<stdio.h>
int main()
{
int h1,m1,h2,m2,hour,min,h;
printf("enter the 2 time values in hours and min format");
scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
hour=h1-h2;
if(m1<m2)
{
min=m1-m2;
min+=60;
  if(hour<0)
  {
++hour;
  }
  else
  {--hour;}
    
}else
min=m1-m2;
printf("%d:%d is the time value",hour,min);
return(0);
}
