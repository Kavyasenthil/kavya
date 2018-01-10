#include <stdio.h>
int main(void) {
	int a,b,c;
	printf("\n enter 3 numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("\n a is larger");
	}
	if(b>a&&b>c)
	{
		printf("\n b is larger");
	}
	if(c>a&&c>b)
	{
		printf("\n c is larger");
	}
	return 0;
}
