#include <stdio.h>
int main(void)
{
    int num, temp;
    scanf("%d %d", &num, &temp);

    int time = 0;
    int tempp = 0;  // 标记当前i
    int temppp = 0; // 标记当前位
    for (int i = 1; i <= num; i++)
    {
        tempp = i;
        while (tempp != 0)
        {
            temppp = tempp % 10;
            if (temppp == temp)
                time++;
            tempp = tempp / 10;
        }
    }

    printf("%d", time);

    return 0;
}