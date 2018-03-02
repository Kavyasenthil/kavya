#include <stdio.h>

int main(void) {
	int n,a[100],i,k;
	printf("\nenter the n and k value");
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("the kth num is %d",a[k]);
	return 0;
}
