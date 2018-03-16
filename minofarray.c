#include <stdio.h>

int main(void) {
int i,a[10],j,s,n;
printf("\n enter the number of elements");
scanf("%d",&n);
printf("\n enter the array");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
	if(a[i]>a[j])
	{
		s=a[i];
		a[i]=a[j];
		a[j]=s;
	}
}}
for(i=0;i<n;i++)
{
printf("\n the minimum number is %d",a[0]);
break;
}
	return 0;
}
