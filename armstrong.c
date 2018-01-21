#include <stdio.h>

int main(void) {
	int a,b,num,c=0;
	printf("\n enter the number");
	scanf("%d",&num);
	a=num;
 while (a!=0)
    {
        b=a%10;
        c+=b*b*b;
        a= a/10;
    }
    if(c==num)
        printf("\n %d is an Armstrong number",num);
    else
        printf("\n %d is not an Armstrong number",num);

	return 0;
}
