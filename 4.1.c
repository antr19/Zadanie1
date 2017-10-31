#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,mt,max,min,m,M,k;
    scanf("%d",&n);
    int* S = malloc(n*sizeof(int));
    int* Mas = malloc(n*sizeof(int));
    for (i=1;i<=n;i++)
    {
        scanf("%d %d",&Mas[i],&S[i]);
    }
    max = 0;
    mt = 0;
    k=0;
    M=0;
    for (i=1;i<=n;i++)
    {
        if (S[i]>max)
        {
            max=S[i];
            M=i;
        }

    }
    printf("%d    %d \n",max,M+1);
    while (mt<=max)
    {
        k++;
        min=S[1];
        m=1;
        for(i=1;i<n;i++)
        {
            if (min>S[i])
            {
                min=S[i];
                m=i;
            }

        }
        if (min!=max)
        {
            printf("%d %d \n",k,m+1);
            mt=mt+Mas[m];
            S[m]=S[M];
        }
    }
    printf("%d %d \n",k,M+1);
    printf("%d \n",k);
free(S);
free(M);
return 0;
}
