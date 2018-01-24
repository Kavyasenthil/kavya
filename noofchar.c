#include<stdio.h>
int main() {
char a[100];
int i,b=0;
for(i=0;a[i]<=100;i++)
{
scanf("%s",&a[i]);
if((a[i]>='a')&&(a[i]<='z')&&(a[i]!=' '))
b=b+1;
}
printf("%d",b);
}
