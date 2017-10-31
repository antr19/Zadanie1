3#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i",&n);
    if (n<0)
    {
        return -1;
    }
    int a[32000]={1,1,2,1}; //Не получилось с динамическим массивом
    int i,k;
    k=4;
    for (i=3;i<=n;i++)
    {
        a[k]=1;
        int j;
        for (j=1;j<=(i-1);j++)
        {
            a[k+j]=a[k-i+j-1]+a[k-i+j];
        }
        a[k+i]=1;
        k=k+i+1;
    }
    i=k-i;
    while (a[i]!=0)
    {
        printf("%d",a[i]);
        i++;
    }
    return 0;
}
