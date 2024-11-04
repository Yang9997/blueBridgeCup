#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int temp1, temp2, temp3;
    if (a < b)
    {
        if (b < c)
        {
            temp1 = a;
            temp2 = b;
            temp3 = c;
        }
        else if (a < c)
        {
            temp1 = a;
            temp2 = c;
            temp3 = b;
        }
        else
        {
            temp1 = c;
            temp2 = a;
            temp3 = b;
        }
    }
    else if (b < a)
    {
        if (c < b)
        {
            temp1 = c;
            temp2 = b;
            temp3 = a;
        }
        else if (a < c)
        {
            temp1 = b;
            temp2 = a;
            temp3 = c;
        }
        else
        {
            temp1 = b;
            temp2 = c;
            temp3 = a;
        }
    }
    else
    {
        temp1 = a;
        temp2 = b;
        temp3 = c;
    }

    int temp = 1;
    for (int i = 1; i <= temp1; i++)
    {
        if (temp1 % i == 0 && temp3 % i == 0)
            temp = i;
    }

    printf("%d/%d", temp1 / temp, temp3 / temp);

    return 0;
}