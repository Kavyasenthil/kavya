#include <stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int count=0,i;
	printf("enter the string ");
	scanf("%[^\n]s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		count++;
	}
	printf(" \n number of words %d",count+1);
	
	return 0;
}
