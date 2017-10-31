#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i",&n);
    if(n<=0)
    {
        return -1;
    }
    int i;
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
