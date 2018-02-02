#include <stdio.h>

int main(void) {
int a[10],i,j,max,t;
printf("\n enter the array");
for(i=0;i<10;i++)
{
	scanf("%d",a[i]);
}
for(i=0;i<10;i++)
{
	for(j=i+1;j<10;j++)
	{
	if(a[i]<a[j])
	{
		t=a[i];
		a[i]=a[j];
		a[j]=a[i];
	}
}
}
for(i=0;i<10;i++)
{
	max=a[0];
}
printf("\n maximum value is %d",max);
	return 0;
}
