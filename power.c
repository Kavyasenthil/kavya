#include <stdio.h>

int main(void) {
int a,b,power=1;
printf("\n enter the base value");
scanf("%d",&a);
printf("\n enter the exponent");
scanf("%d",&b);
while(b!=0)
{
	power=power*a;
	--b;
}
printf("\n the power value is %d",power);
	return 0;
}
