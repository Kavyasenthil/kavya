#include <stdio.h>

int main(void) {
int a,b,n;
printf("\n enter 2 numbers");
scanf("%d %d",&a,&b);
printf("\n numbers before swapping %d %d",a,b);
n=a;
a=b;
b=n;
printf("\n numbers after swapping are %d %d",a,b);
	return 0;
}
