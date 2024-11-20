#include <stdio.h>
int main(void)
{
    int n, k;
    scanf("%d",&n);
    scanf("%d",&k);

    //要用double，float会有数字除不尽的影响
    int an = 0;
    double suma = 0;
    int bn = 0;
    double sumb = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0 && i >= k)
        {
            an++;
            suma += i;
        }
        else
        {
            bn++;
            sumb += i;
        }
    }

    printf("%.1lf %.1lf", suma / an, sumb / bn);

    return 0;
}