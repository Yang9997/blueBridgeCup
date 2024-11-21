#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int a[n+1];
    for(int i = 1;i<=n;i++)
    {
        if(i == 1)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = a[i-1]*i
        }
    }

    long long sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
    }

    printf("%d",a[i])
    return 0;
}