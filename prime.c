#include <stdio.h>

int main(void) {
	int a,i,count=0;
	printf("\n enter the number");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		count++;
	}
	if(count==0)
{	printf("\n prime number");}
	else{
		printf("\n not a prime number");
	}
	return 0;
}
