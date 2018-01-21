#include <stdio.h>

int main(void) 
{
int a,b,i,j;
printf("\n enter the first number");
scanf("%d",&a);
printf("\n enter the last number");
scanf("%d",&b);
printf("\n the prime numbers are");
for(i=a;i<=b;i++)
{
int count=0;
	for(j=2;j<i/2;j++)
	{
		if(i%j==0)
		{
			count++;
			break;
			
		}}
		
		if(count==0 && i!=1)
		{
		printf("\t %d",i);
	}
}
	return 0;
}
