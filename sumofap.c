#include <stdio.h>

int main(void) {
	int a,b,c,i,s;
	printf("\n enter the 3 numbers");
	scanf("%d %d %d",&a,&b,&c);
for(i=0;i<c;i++) 
{
        s+=a;
        a=a+(c-1)*b;
    }
	printf("\nThe AP is %d",s);
	return 0;
}
