#include <stdio.h>
#include<math.h>
int main(void) {
	int n,i;
	int a=0;
	printf("\n enter the n value");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a=a+i;
	}
	printf("\n sum value is %d",a);
	return 0;
}
