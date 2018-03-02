#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,j,n,l;
    printf("\n enter the character");
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {   if(a[i]>a[j])
            {
            n=a[i];
            a[i]=a[j];
            a[j]=n;
            }
        }
    }
    printf("\n the order is");
    for(i=0;i<l;i++)
    {
        printf("\t%c",a[i]);
    }
}
