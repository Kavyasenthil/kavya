#include <stdio.h>
 int main(void) 
{
	int a,b,i,t,lcm;
	printf("\n enter the two numbers");
	scanf("%d %d",&a,&b);
	printf("\n LCM is");
	for(i=2;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			t=i;
		}
		lcm=(a*b)/t;
		printf("%d",lcm);
		
	}
	return 0;
}
