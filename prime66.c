#include <stdio.h>

int main(void)
{
	int n,i,s=0;
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		s++;
	}
	if(s==2)
	{
	printf("\n prime number");
	
}
	else
	{
		printf("\n not a prime number");
	}
	return 0;
}
