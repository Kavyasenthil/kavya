#include <stdio.h>
 
int main(void) {
int n;
printf("\n enter the number");
scanf("%d",&n);
printf("\n the numbers are");
while(n!=0)
{
	printf("\t%d",n/2);
	n=n/2;
}
	return 0;
}
