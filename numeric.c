#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10];
	int i,count=0;
	printf("\n enter the string");
	for(i=0;i<10;i++)
	{
	scanf("%s",&a[i]);
	}
	for(i=0;i<=10;i++)
	{
	if(a[i]=='1'|| a[i]=='2'|| a[i]=='3'|| a[i]=='4'|| a[i]=='5'|| a[i]=='6'|| a[i]=='7'|| a[i]=='8'|| a[i]=='9'|| a[i]=='0')
{
	if(a[i]>='a'|| a[i]>='A')
{
	if(a[i]<='z'||a[i]<='Z')
	{
            printf("\n not numeric");
}
}count++;
}}
	if(count==0)
	printf("no");
	else
	printf("yes");

return(0);
	
}
