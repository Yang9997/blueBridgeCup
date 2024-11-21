#include <stdio.h>
#include<math.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int is; // 0：不是回文质数 1：是回文质数
    for (int i = a; i <= b; i++)
    {
        is = 1;
        // 2和3是回文质数
        if (i == 2 || i == 3)
        {
            printf("%d\n", i);
        }
        // 判断其他数字
        else
        {
            // 判断是否是质数
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    // 不是质数
                    is = 0;
                    //printf("%d is not pal.\n", i);
                    //printf("------\n");
                    break;
                }
            }

            // 是质数，判断是否是回文质数
            if (is)
            {
                //printf("%d is pal.\n", i);
                int temp = i;  // 计当前数字
                int tempp = 0; // 计位数
                while (temp > 0)
                {
                    tempp++;
                    temp /= 10;
                }
                //printf("%d has %d sits.", i, tempp);

                temp = i;
                for(int k =1;k<=tempp/2;k++)
                {
                    if(temp/(int)(pow(10,k))%10 != temp/(int)(pow(10,tempp-k+1))%10)
                    {
                        is = 0;
                        break;
                    }
                }
            }
        }

        if (is)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}