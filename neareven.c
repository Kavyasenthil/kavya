#include "stdio.h"

int main() {
  int a;
  printf("\n enter the no.");
  scanf("%d",&a);
  if(a%2!=0)
  {
    printf("\n nearest even no. is %d",a-1);
  }
  else
  {
    printf("\n nearest even no. is %d",a-2);
  }
  }
