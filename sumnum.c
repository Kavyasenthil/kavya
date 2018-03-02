
#include <stdio.h>
int main(void)
{
int n,a[100],i,sum=0;
printf("\n enter the limit");
scanf("%d",&n);
printf("\n enter the numbers");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}printf("\n the sum value is");
for(i=0;i<n;i++)
{
	sum=sum+a[i];
}
printf("%d",sum);
	return 0;
}
