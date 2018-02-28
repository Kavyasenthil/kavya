#include <stdio.h>
#include<string.h>
int main(void) {
char a[10];
int i,l;
printf("\n enter the string\n");
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
	if(i%2==0)
	{
		printf("%c",a[i]);
	}}printf("\n");
	for(i=1;i<l;i++)
	{
	if(i%2!=0)	
	printf("%c",a[i]);
}
	return 0;
}
