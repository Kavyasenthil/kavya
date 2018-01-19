#include <stdio.h>

int main(void)
{
int a,r,n,t,m=0;
printf("\n enter the  number");
scanf("%d",&n);
t=n;
while(t!=0)
{
	r=t%10;
	t=t/10;
	m=m*10+r;
}
if(n==m)
{
	printf("\n number is palindrome");
}
else
{
	printf("\n not a palindrome");
}
	return 0;
}
