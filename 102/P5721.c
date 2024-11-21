#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int i = 1;
    int temp = 0;
    for(i=(n-1);i>=i/2;i--)
    {
        for(int j = 1;(j*j+i*i)<=n*n;j++)
        {
            if((i*i+j*j)==n*n)
            {
                temp = 1;
                break;
            }
        }
        if(temp==1)
            break;
    }

    i = n;
    int num = 0;
    for(;i>0;i--)
    {
        for(int j = 0;j<i;j++)
        {
            num++;
            if(num<10)
            {
                printf("0%d",num);
            }
            else
            {
                printf("%d",num);
            }
        }
        printf("\n");
    }

    return 0;
}