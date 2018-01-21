#include <stdio.h>

int main(void) {

	int a,i,b=1;
	printf("\n enter the number");
	scanf("%d",&a);
	for(i=1;i<=5;i++)
	{
	b=a*i;	
	printf("%d\n",b);
	}	return 0;
}
