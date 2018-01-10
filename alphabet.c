#include <stdio.h>

int main(void) {
char a;
printf("\n enter the character");
scanf("%c",&a);
if(a>='a'|| a>='A')
{
	if(a<='z'||a<='Z')
	{
		printf("\n alphabet");
	}
}
	else 
	{
	printf("\n not an alphabet");
	}

	return 0;
}
