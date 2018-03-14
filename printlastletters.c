#include <stdio.h>
#include<string.h>
int main(void) {
	char s[10];
	int n,l,i;
	printf("\n enter the name");
	scanf("%s",&s);
	printf("\n enter the number of letters to be printed");
	scanf("%d",&n);
	l=strlen(s);
	printf("\n");
	for(i=l-n;i<l;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
