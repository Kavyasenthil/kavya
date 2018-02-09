#include <stdio.h>
#include<string.h>
int main(void) {
  char s[10];
  int k,i;
  printf("\n enter the string");
  scanf("%s",&s);
  printf("\n enter the k value \n");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
  printf("%c",s[i]);
  }
	return 0;
}
