#include <stdio.h>

int main(void) {
int a,b;
printf("\n enter the 2 numbers");
scanf("%d %d",&a,&b);
printf("\n numbers before swapping %d %d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n the swapped numbers are %d %d",a,b);
	return 0;
}
