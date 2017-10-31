#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,d,c,i,n;
    scanf("%d",&n);
    scanf("%d",&a);
    for(i=1;i<=(n-1);i++)
    {
        scanf("%d",&d);
        if (d>a)
        {
            a=d;
        }
    }
    printf("%d",a);
    return 0;
}
