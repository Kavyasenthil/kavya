#include <stdio.h>

int main(void) {
int a[100],n,i,median;
printf("\n enter the no. of values");
scanf("%d",&n);
printf("\n array element and its index is");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("\n %d \t %d",a[i],i);
}

} 
