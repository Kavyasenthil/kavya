#include <stdio.h>

int main(void) {
int a,b,i;
printf("\n enter the starting number");
scanf("%d",&a);
printf("\n enter the last number");
scanf("%d",&b);
printf("\n the odd numbers are");
for(i=a;i<=b;i++)
{
	if(i%2==1)
	{
		printf("\t %d",i);
	}
}
	return 0;
}
