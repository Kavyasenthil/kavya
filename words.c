#include<stdio.h>
int main()
{
int i,words,count=0;
char a[200];
printf("\n enter the sentence:");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count++;
words=count+1;
}
}
printf("\n no. of words: %d",words);
return 0;
}
