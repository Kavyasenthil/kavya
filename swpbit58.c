#include <stdio.h>

int main(void) {
int m,n;
printf("\n enter 2 numbers");
scanf("%d %d",&m,&n);
printf("\n numbers before swapping %d %d",m,n);
m=m^n;
n=m^n;
m=m^n;
printf("\n the swapped numbers are %d %d",m,n);
	return 0;
}
