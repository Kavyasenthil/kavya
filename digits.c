#include <stdio.h>

int main(void) {
	int n,t=0;
	printf("\n enter the  number");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		t++;
	} printf("\n no of digits %d",t);
	return 0;
}
