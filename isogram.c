#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[20];
	int i,j,c=0;
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	{
		for(j=i+1;j<strlen(a);j++)
		{
			if(a[i]==a[j])
			{
			c=1;
			break;
			}
		}
	}
	if(c==1)
	printf("\n No");
	else
	printf("\n yes");
	return 0;
}
