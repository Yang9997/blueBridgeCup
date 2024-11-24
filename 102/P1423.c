#include<stdio.h>
int main(void)
{
    float s;
    scanf("%f",&s);

    int n = 1;
    float temp = 2.0;
    float s0 = 2.0;
    while(s0<s)
    {
        temp *= 0.98;
        s0 += temp;
        n++;
    }

    printf("%d",n);
    
    return 0;
}