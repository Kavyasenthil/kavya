#include <stdio.h>
#include<string.h>

int main(void) {
char s[100];
int k,i;
printf("\n enter the string");
scanf("%s",&s);
printf("\n enter the no. of times");
scanf("%d",&k);
for(i=0;i<k;i++)
{
	printf("\n %s",s);
}
	return 0;
}
