#include <stdio.h>
int main(void)
{
int a,i,first=0,second=1,sum;
printf("\n enter the limit");
scanf("%d",&a);
printf("\n the fibonacci series is");
for(i=0;i<a;i++)
{
	sum=first+second;
	first=second;
	second=sum;
	printf("\t %d",sum);
}	return 0;
}
