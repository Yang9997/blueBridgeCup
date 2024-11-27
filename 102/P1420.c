#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int temp = 0;
    for(int i = 0;i<n;i++)
    {
        int tempp = 1;
        for(int j = i;j<(n-1);j++){
            if(a[j + 1]==(a[j]+1))
                tempp++;
            else
                break;
        }
        if(tempp>temp)
            temp=tempp;
    }

    printf("%d",temp);

    return 0;
}