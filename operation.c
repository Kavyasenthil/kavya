#include<stdio.h>
int main()
{
  int a,b,c,ans;
  printf("\n enter the 3 num");
  scanf("%d %d %d",&a,&b,&c);
  ans=(a*b)%c;
  printf("\n the value is %d",ans);
  return 0;
}
