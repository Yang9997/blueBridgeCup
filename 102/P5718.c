#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int temp = a[0];
    for(int i = 0;i<n;i++)
    {
        if(temp>a[i])
            temp = a[i];
    }

    printf("%d",temp);
    return 0;
}