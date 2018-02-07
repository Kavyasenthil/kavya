#include "stdio.h"

int main(void) {
  int n,a,sum=0;
  printf("\n enter the number");
  scanf("%d",&a);
  while(a>0)
  {
    n=a%10;
    a=a/10;
    sum=sum+n;
  }
  printf("\n sum of digits is %d",sum);
  return 0;
}
