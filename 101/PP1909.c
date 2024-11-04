#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int n;
    scanf("%d", &n);

    int n1, n2, n3;//多少支
    int p1, p2, p3;//多少钱
    scanf("%d%d", &n1, &p1);
    scanf("%d%d", &n2, &p2);
    scanf("%d%d", &n3, &p3);

    int i, j, k;
    int a[100] = {0};
    int temp = 0;

    for (i = 0; i <= (n / n1 + 1); i++)
    {
        for (j = 0; j <= (n / n2 + 1); j++)
        {
            for (k = 0; k <= (n / n3 + 1); k++)
            {
                if ((i * n1 + j * n2 + k * n3) >= n)
                {
                    a[temp] = i * p1 + j * p2 + k * p3;
                    temp++;
                }
            }
        }
    }

    int b = a[0];
    for (int t = 0; t < temp; t++)
    {
        if (a[t] < b)
            b = a[t];
    }

    printf("%d", b);

    return 0;
}