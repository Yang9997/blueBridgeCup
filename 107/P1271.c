#include<stdio.h>
int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);

    int a[m];

    for(int i = 0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }

    int temp = 0;//最小值下标
    int t;

    //冒泡
    for(int i = 0;i<(m-1);i++)
    {
        temp = i;
        for(int j = i+1;j<m;j++)
        {
            if(a[j]<a[temp])
                temp = j;
        }

        if(temp!=i )
        {
            t = a[i];
            a[i] = a[temp];
            a[temp] = t;
        }
    }

    for(int i = 0;i<m;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}