#include <stdio.h>
#include <string.h>
int main(void)
{
    int a[100] = {0};
    int i, b, c;
    scanf("%d%d%d", &i, &b, &c);
    a[i] = 1;
    a[b] = 1;
    a[c] = 1;

    char s[4];
    scanf("%s", s);

    char temp1 = s[0];
    char temp2 = s[1];
    char temp3 = s[2];
    
    int temp = 0; // 计数
    for (int j = 0; j < 100; j++)
    {
        if (a[j] == 1)
        {
            temp++;
            if (temp == (temp1 - 64))
            {
                printf("%d", j);
                break;
            }
        }
    }
    printf(" ");
    temp = 0;
    for (int j = 0; j < 100; j++)
    {
        if (a[j] == 1)
        {
            temp++;
            if (temp == (temp2 - 64))
            {
                printf("%d", j);
                break;
            }
        }
    }
    printf(" ");
    temp = 0;
    for (int j = 0; j < 100; j++)
    {
        if (a[j] == 1)
        {
            temp++;
            if (temp == (temp3 - 64))
            {
                printf("%d", j);
                break;
            }
        }
    }

    return 0;
}