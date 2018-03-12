#include <stdio.h>

int main(void) {
	int a[10],b[10],i;
	printf("\n enter the num of ninjas in kabali and opposite group");
	for(i=0;i<3;i++)
	{
	scanf("%d %d",&a[i],&b[i]);
		
	}
	
	printf("\n the difference is");
	for(i=0;i<3;i++)
	{
	if(b[i]!=0)
	{
	printf("%d\n",b[i]-a[i]);
	}
	}
		
	
	return 0;
}
