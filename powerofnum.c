#include <stdio.h>
#include<math.h>
int main(void) {
	int n,k,power;
	printf("\n enter the 2 numbers");
	scanf("%d%d",&n,&k);
	power=pow(n,k);
	printf("\n power is");
	printf("\t %d",power);
	return 0;
}
