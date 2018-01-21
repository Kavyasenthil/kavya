#include <stdio.h>

int main(void) 
{

int a,i,fact=1;
printf("\n enter an integer");
scanf("%d",&a);
if(a>0)
{
for(i=1;i<=a;i++)
{
fact*=i;
}
printf("\n %d is the factorial number",fact);
}
else{
printf("\n error");
}
return 0;
}
