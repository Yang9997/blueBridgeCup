#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n*n;i++)
    {
        if((i-1)%n==0 && i!=1)
            printf("\n");
        
        if(i<10)
        {
            printf("0%d",i);
        }
        else{
            printf("%d",i);
        }
    }

    printf("\n");

    int tag = 1;
    for(int i = 1;i<=n;i++)
    {
        int j = n-i;
        while(j!=0)
        {
            printf("  ");
            j--;
        }
        for(int k = 0;k<i;k++)
        {
            if(tag<10)
            {
                printf("0%d",tag);
            }
            else{
                printf("%d",tag);
            }
            tag++;
        }
        printf("\n");
    }
    



    return 0;
}