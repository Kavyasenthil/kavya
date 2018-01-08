#include <stdio.h>
#include<conio.h>
int main(void) {
	int a;
	printf("\n enter the year");
	scanf("%d",&a);
	if(a%4==4)
	{
		printf("\n leap year");
	}
	else
	{
		printf("\n not leap year");
	}
	return 0;
}
