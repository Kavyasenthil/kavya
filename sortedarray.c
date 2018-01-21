#include <stdio.h>

int main(void) {
int a[100],n,i,j,t;
printf("\n enter the no. of values");
scanf("%d",&n);
printf("\n sorted array is");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
	if(a[j]>a[i])
	{
		t=a[j];
		a[j]=a[i];
		a[i]=t;
}
}
}for(i=0;i<n;i++)
{
printf("\t %d ", a[i]);}
	return 0;
}
