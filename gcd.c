#include <stdio.h>
int main()
{
    int a,b,i,ans;

    printf("\n Enter two integers:");
    scanf("%d %d",&a,&b);
	for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            ans=i;
    }printf("G.C.D of %d and %d is %d",a,b,ans);
    return 0;
}
