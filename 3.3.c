#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if (n<=0)
    {
        return -1;
    }
    int F(n)
    {
        if(n==1)
        {
            return 1;
        }
        else if (n==2)
        {
            return 1;

        }
        else
        {
            return (F(n-1)+F(n-2));
        }
    }
    printf("%d",F(n));
    return 0;
}
