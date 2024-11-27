#include<stdio.h>
int main(void)
{   
    int n;
    scanf("%d",&n);

    for(int i = 2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int istag = 1;
            for(int j = 2;j*j<=i;j++)
            {
                if((i%j)==0)
                {
                    istag = 0;
                    break;
                }
            }
            if(istag)
            {
                for(int j = 2;j*j<=(n/i);j++)
                {
                    if((n/i%j)==0)
                    {
                        istag = 0;
                        break;
                    }
                }
            }
            if(istag)
            {
                printf("%d",n/i);
                break;
            }
        }
    }

    return 0;
}