#include <stdio.h>
int main(void)
{
int n,i,f=0,s=1,sum;
printf("\n enter the n value");
scanf("%d",&n);
printf("\n the series is");
for(i=0;i<n;i++)
{
	sum=f+s;
	f=s;
	s=sum;
	printf("\t %d",f);
}	return 0;
}
