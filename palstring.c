#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	int n;
	printf("\n enter the string");
	scanf("%s",&a);
	strcpy(b,a);
	strrev(a);
	n=strcmp(a,b);
	if(n==0)
	{
		printf("\n palindrome");
		
	}
	else
	{
		printf("\n not a palindrome");
	}return 0;
}
