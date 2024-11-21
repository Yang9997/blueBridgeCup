#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);

    int temp = n; // 计剩余
    int num = 0;  // 计数
    int is = 1;   // 默认是质数

    for (int i = 2; i <= n; i++)
    {
        is = 1;
        if (i == 2 || i == 3)
        {
            temp -= i;
            if (temp >= 0)
            {
                num++;
                printf("%d\n", i);
            }
            else
            {
                break;
            }
        }
        else
        {
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    is = 0;
                    break;
                }
            }
            if (is)
            {
                temp -= i;
                if (temp >= 0)
                {
                    num++;
                    printf("%d\n", i);
                }
                else
                {
                    break;
                }
            }
        }
    }
    printf("%d", num);

    return 0;
}