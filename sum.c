#include<stdio.h>
int main()
{
	int a,i,sum=0;
	printf("enter the num:");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("the sum is %d",sum);
	return 0;
}
