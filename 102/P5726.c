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
    
    int max = a[0];
    int min = a[0];
    float sum = 0;

    for(int i = 0;i<n;i++)
    {
        if(max<a[i])
            max = a[i];
        if(min>a[i])
            min = a[i];

        sum+=1.0*a[i];
    }

    printf("%.2f",(sum-max-min)/(n-2));

    return 0;
}