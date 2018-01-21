    #include <stdio.h>
     
    int main(void) {
    	int a,i,b,first,last,c=0;
    	printf("\n enter the first number");
    	scanf("%d",&first);
    	printf("\n enter the last number");
    	scanf("%d",&last);
    	for(i=first;i<=last;i++)
    	{
    		a==i;
     while (i!=0)
        {
            b=i%10;
            c+=b*b*b;
            i= i/10;
        }
    	}
        if(c==a)
            printf("\t %d",a);
     
    	return 0;
    }
     
