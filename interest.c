#include <stdio.h>

int main(void) {
	int p,r,t,interest;
	printf("\n enter the principle value,rate,time");
	scanf("%d %d %d",&p,&r,&t);
	interest=(p*r*t)/100;
	printf("%d",interest);
	return 0;
}
