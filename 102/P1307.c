#include<stdio.h>
int main(void)
{
    int N;
    scanf("%d",&N);

    int n;
    int flag;
    if(N>0)
    {
        n = N;
        flag = 1;
    }
    else if(N==0)
    {
        n = 0;
        printf("0");
        return 0;
    }
    else
    {
        n = -1 *N;
        flag = -1;
    }

    int temp = 0;
    while(n!=0)
    {
        temp*=10;
        temp+=n%10;
        n/=10;
    }
    printf("%d",temp*flag);

    return 0;
}