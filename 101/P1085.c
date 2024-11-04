#include <stdio.h>
int main(void)
{
    int in_school[7];
    int out_school[7];
    int n = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d%d", &in_school[i], &out_school[i]);
        if ((in_school[i] + out_school[i]) > 8)
            if ((in_school[i] + out_school[i]) > (in_school[n] + out_school[n]))
                n = i;
    }

    if(n == 0)
    {
        printf("0");
    }
    else{
        printf("%d",n+1);
    }

    return 0;
}