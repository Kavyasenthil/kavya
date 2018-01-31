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
if(a[i]>='!'&&a[i]<='*')
{
++count;
}
}
printf("\n no. of special characters: %d",count);
return 0;
}
