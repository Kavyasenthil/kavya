#include<stdio.h>
#include<string.h>
int main()
{
int i,l,count=0;
char a[200];
printf("\n enter the string:");
scanf("%[^\n]s",&a);
l=strlen(a);
for(i=0;i<=l;i++)
{
if(a[i]>='0'&&a[i]<='9')
{
++count;
}
}
printf("\n no. of numeric values: %d",count);
return 0;
}
