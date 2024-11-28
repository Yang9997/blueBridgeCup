#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);

    int x;
    int k;
    int sum;
    int istag;
    for (x = 100; x > 0; x--)
    {
        istag = 1;
        for (k = 1; istag == 1; k++)
        {
            sum = 0;
            sum += 52 * 7 * x + (1 + 2 + 3 + 4 + 5 + 6) * 52 * k;
            if (sum > n)
            {
                istag = 0;
                break;
            }
            if (sum == n)
            {
                printf("%d\n%d", x, k);
                return 0;
            }
        }
    }
}