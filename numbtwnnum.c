#include <stdio.h>

int main(void) {
	int n,l,r,i,c=0;
	printf("enter the number");
	scanf("%d",&n);
	printf("\n enter the 2 numbers");
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++)
	{
		if(i==n)
		{
			c++;
		}}
		if(c>0)
		{
			printf("\n yes");
		}else
		{
			printf("\n no");
		}
	return 0;
}
