#include <stdio.h>

int main(void) {
	int i,a;
	printf("enter the num");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if((a%i)==0)
		{
			break;
		}}
		if(a!=i)
		printf("\ncomposite number");
		else 
		printf("\n not a composite number");
	
	return 0;
}
