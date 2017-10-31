#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y,x0,y0;
    double l[3];
    double l0;
    int i;
    scanf("%d %d",&x0,&y0);
    for (i=1;i<4;i++)
    {
        scanf("%d %d",&x,&y);
        l[i]=sqrt((x-x0)*(x-x0)+(y-y0)*(y-y0));
    }
    for (i=1;i<3;i++)
    {
        if (l[i]<l[i+1])
        {
            l0=l[i];
            l[i]=l[i+1];
            l[i+1]=l0;
        }
    }
    for (i=1;i<3;i++)
    {
        if (l[i]<l[i+1])
        {
            l0=l[i];
            l[i]=l[i+1];
            l[i+1]=l0;
        }
    }
    printf("%.2f",l[3]*l[2]);
    return 0;
}
