#include <stdio.h>

int main(void) {
	int a,n;
	printf("\n enter the  number");
	scanf("%d",&a);
	while(a>0)
	{
		a=a/10;
		n++;
	} printf("\n no of digits %d",n);
	return 0;
}
