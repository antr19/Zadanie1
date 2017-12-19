#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b)
{
    int A = *(int*) a;
    int B = *(int*) b;
    return A - B;
}

int main(void)
{
    int n, k, i, mt;
    scanf("%d", &n);
    int* S =(int*) malloc(n * sizeof(int));
    int* Mas =(int*) malloc(n * sizeof(int));


    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &Mas[i], &S[i]);
    }

    qsort(Mas, n, sizeof(int), comp); // Эту магию мне рассказал ученик Третьяковаа
    qsort(S, n, sizeof(int), comp);

    mt = 0;
    k = 0;

    while (mt <= Mas[n - 1])
    {
        if (k == (n + 1))
            break;

        mt += Mas[k];

        printf("#%d Massa%d Sila%d\n", k+1, Mas[k], S[k]);
        k++;
    }
    return 0;
}
