#include<stdio.h>
int main()
{
char a[10],i,count=0;
printf("\n enter the string");
scanf("%s",&a);
for(i=0;i<10;i++)
{
if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
	count++;
}
}
if(count>0)
{
printf("\n has vowel");
}
else
{
printf("\n has no vowel");
}
return 0;
}
