#include<stdio.h>
int main()
{
int num,hour,min;
printf("enter the number");
scanf("%d",&num);
hour=num/60;
min=num%60;
printf("\n %d Hours %d Minutes ",hour,min);
return(0);
}
