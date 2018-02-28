#include <stdio.h>
int main(void) {
int a[10],b[10],i,n;
char c[10];
printf("\n enter the number of sets");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d %c %d",&a[i],&c[i],&b[i]);
}
for(i=0;a[i]!='\0';i++)
{
	if(c[i]=='/')
	{
		printf("\n%d is the division value\n",a[i]/b[i]);
	}
	if(c[i]=='%')
	{
		printf("%d is the modulo value\n",a[i]%b[i]);
	}
}
	return 0;
}
