#include<stdio.h>
int main()
{
int i,s,num,count=0;
char a[200];
printf("\n enter the sentence:");
scanf("%[^\n]s",&a);
s=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count++;
num=s-count;
}
}
printf("\n no. of characters without space: %d",num);
return 0;
}
