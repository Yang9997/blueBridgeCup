#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[14];
    scanf("%s", s);

    int num = 0;
    int j = 1;
    for (int i = 0; i < 11; i++)
    {
        if (i == 1 || i == 5)
            continue;
        num += (s[i] - 48) * j;
        j++;
    }

    if (num % 11 == 10 && s[12] == 'X')
        printf("Right");
    else if (num % 11 == (s[12] - 48))
        printf("Right");
    else
    {
        for (int i = 0; i < 12; i++)
        {
            printf("%c", s[i]);
        }
        if (num % 11 == 10)
            printf("%c",'X');
        else
            printf("%d", num % 11);
    }

    return 0;
}