#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    if (n<=0)
    {
        printf("Error");
    }
    else if (n==1)
    {
        printf("1");
    }
    else if (n==2)
    {
        printf("1");
    }
    else
    {
     a=1;
     b=1;
     for (i=1;i<=n-2;i++)
     {
         c=a+b;
         a=b;
         b=c;
     }
     printf("%d",c);
    }
    return 0;
}
