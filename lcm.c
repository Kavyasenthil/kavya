#include <stdio.h>
 int main(void) 
{
	int a,b,i;
	printf("\n enter the two numbers");
	scanf("%d %d",&a,&b);
	for(i=2;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			printf("\n LCM is %d",i);
			break;
		}
		else
		{
			printf("\n enter valid input");
			break;
		}
	}
	return 0;
}
