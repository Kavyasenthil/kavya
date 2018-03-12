#include <stdio.h>

int main(void) {
	int i,n,count=0;
	printf("enter the num");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if((n%i)==0)
		{
		    count++;
			break;
		}}
		if(count!=0)
		printf("\ncomposite number");
		else 
		printf("\n not a composite number");
	
	return 0;
}
