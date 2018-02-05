#include <stdio.h>

int main(void) {
int a[100],i,j,n,avg,t;
printf("\n enter the number of elements");
scanf("%d",&n);
printf("\n enter the array");
for(i=0;i<=n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
	for(j=i+1;j<=n;j++)
	{
	if(a[i]<a[j])
	{
		t=a[i];
		a[i]=a[j];
		a[j]=a[i];
	}
}
}
for(i=0;i<=n;i++)
{
avg=a[(n-1)/2];
}
printf("\n average value is %d",avg);
return 0;
}
