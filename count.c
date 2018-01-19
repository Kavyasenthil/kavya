#include <stdio.h>

int main(void) {
	int a,count=0;
	printf("\n enter the integer");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a/10;
		++count;
	}
	printf("\n the number of digits are %d",count);
	return 0;
}
