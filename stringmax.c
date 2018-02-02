#include <stdio.h>
#include<string.h>

int main(void) {
	char a[20],b[20];
	int al,bl;
	printf("\n enter the 2 strings");
	scanf("%s %s",&a,&b);
	al=strlen(a);
	bl=strlen(b);
	if(al>=bl)
	{
		printf("\n %s",a);
	}
	else
	{
		printf("\n %s",b);
	}
	return 0;
}
